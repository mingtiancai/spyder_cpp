#include <thread>

#include <QImage>
#include <QSplashScreen>
#include <QPainter>
#include <QSvgRenderer>
#include <QMessageBox>
#include <QFile>

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	setWindowTitle("spyder_cpp");

	//connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::shouWarning);

	ui->statusbar->show();
	ui->statusbar->showMessage(tr("hello spyder"), 2000);

	setStyleSheet();
	initStatusBar();
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

void MainWindow::shouWarning()
{
	QMessageBox msgBox;
	msgBox.setText("The document has been modified.");
	msgBox.setWindowTitle("Spyder1");
	msgBox.setStyleSheet("QLabel{"
		"min-width: 300px;"
		"min-height: 150px; "
		"font-size: 16px;"
		"color: #F050F0;"
		"}");
	msgBox.exec();
}

void MainWindow::setStyleSheet()
{
	QFile file(":/qss/test1.qss");
	file.open(QFile::ReadOnly);
	QString styleSheet = QString::fromLatin1(file.readAll());

	static_cast<QApplication*>(QCoreApplication::instance())->setStyleSheet(styleSheet);
}

void MainWindow::initStatusBar()
{
	auto status = this->statusBar();
	status->setObjectName("StartBar");
	status->showMessage("Welcome to Spyder!", 5000);
}
