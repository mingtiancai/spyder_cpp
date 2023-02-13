#include <thread>

#include <QImage>
#include <QSplashScreen>
#include <QPainter>
#include <QSvgRenderer>

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	setWindowTitle("spyder_cpp");
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::createSplashScreen()
{
	auto image = QImage(500, 400, QImage::Format_ARGB32_Premultiplied);
	image.fill(0);
	auto painter = QPainter(&image);
	QIcon icon = QIcon(":/splash.svg");
	auto renderer = QSvgRenderer(QString("C:/projects/spyder_cpp/resource/img_code_src/splash.svg"));
	renderer.render(&painter);
	painter.end();

	auto pm = QPixmap::fromImage(image);
	pm = pm.copy(0, 0, 500, 400);

	auto splash = QSplashScreen(pm);
	auto splash_font = splash.font();
	splash_font.setPixelSize(14);
	splash.setFont(splash_font);

	splash.show();
	splash.showMessage(QString("Initializing..."),
		Qt::AlignBottom | Qt::AlignCenter | Qt::AlignAbsolute, Qt::white);

	QApplication::processEvents();
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

