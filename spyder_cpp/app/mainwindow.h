#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
	class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	MainWindow(QWidget* parent = nullptr);
	~MainWindow();

	void createSplashScreen();
	void setStyleSheet();
	void initStatusBar();
	void init();

public slots:
	void shouWarning();

private:
	Ui::MainWindow* ui;
	int dockOptions = QMainWindow::AllowTabbedDocks |
		QMainWindow::AllowNestedDocks | QMainWindow::AnimatedDocks;
	int cursorBlinkOsDefault;
};
#endif  // MAINWINDOW_H
