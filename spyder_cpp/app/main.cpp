#include <spdlog/spdlog.h>

#include <QApplication>
#include <iostream>

#include "logger.h"
#include "mainwindow.h"

#include <CLI/CLI.hpp>

using namespace std;




int main(int argc, char* argv[]) {
	INFOLOG("setup spyder_cpp!");
	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
