#include <spdlog/spdlog.h>

#include <QApplication>
#include <QIcon>
#include <iostream>

#include "cli/cli_option.h"
#include "logger/logger.h"
#include "mainwindow.h"

using namespace std;

int main(int argc, char* argv[]) {
	INFOLOG("setup spyder_cpp!");

	core::CliOption option;
	core::getOption(argc, argv, option);
	INFOLOG(option.print());

	QApplication a(argc, argv);
	QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);



	a.setWindowIcon(QIcon(":/windows_app_icon.ico"));
	MainWindow w;
	w.createSplashScreen();
	w.show();
	return a.exec();
}
