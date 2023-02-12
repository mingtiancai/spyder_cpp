#include <spdlog/spdlog.h>

#include <QApplication>
#include <iostream>

#include "logger/logger.h"
#include "mainwindow.h"

#include "cli/cli_option.h"

using namespace std;

int main(int argc, char* argv[]) {
	INFOLOG("setup spyder_cpp!");

	core::CliOption option;
	core::getOption(argc, argv, option);

	INFOLOG(option.print());

	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
