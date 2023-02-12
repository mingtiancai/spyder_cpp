#include <iostream>

#include <QApplication>
#include <QIcon>

#include <spdlog/spdlog.h>

#include "logger/logger.h"
#include "cli/cli_option.h"

#include "mainwindow.h"

using namespace std;

int main(int argc, char* argv[]) {
	INFOLOG("setup spyder_cpp!");

	core::CliOption option;
	core::getOption(argc, argv, option);
	INFOLOG(option.print());

	QApplication a(argc, argv);
	a.setWindowIcon(QIcon(":/spyder.ico"));
	MainWindow w;
	w.setWindowTitle("spyder_cpp");
	w.show();
	return a.exec();
}
