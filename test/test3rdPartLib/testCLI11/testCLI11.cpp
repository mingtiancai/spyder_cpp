#include <CLI/CLI.hpp>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	CLI::App app{ "App description" };

	int p = 0;
	app.add_option("-p,--par", p, "Parameter");

	CLI11_PARSE(app, argc, argv);

	std::cout << "Parameter value: " << p << std::endl;
	return 0;
}