#include "cli_option.h"

#include <CLI/CLI.hpp>

namespace core {
	int getOption(int argc, char** argv, CliOption& option) {
		CLI::App app{ "App description" };

		app.add_option(
			"--new_instance", option.isNewInstance,
			"Run a new instance of Spyder"
			"even if the single instance mode has been turned on (default)");

		app.add_option("--defaults", option.isResetToDefaults,
			"Reset configuration settings to defaults");

		app.add_option("--reset", option.isResetConfigFiles,
			"Remove all configuration files!");

		app.add_option(
			"--optimize", option.isOptimize,
			"Optimize Spyder bytecode (this may require administrative privileges)");

		std::string workingDirectory = "";
		app.add_option("--workdir", workingDirectory, "Default working directory");

		app.add_option("--hide_console", option.isHideConsole,
			"Hide parent console window (Windows)");

		app.add_option("--multithread", option.isMultithread,
			"Internal console is executed in another thread "
			"(separate from main application thread)");

		app.add_option("--profile", option.isProfile, "Profile mode (internal test)");

		std::string projectStr;
		app.add_option("--project", projectStr,
			"Path that contains an Spyder project");

		app.add_option("--paths", option.isPaths, "Show all Spyder configuration paths");

		app.add_option("--debug-info", option.debugInfoStr,
			"Level of internal debugging info to give. "
			"'minimal' only logs a small amount of "
			"confirmation messages and 'verbose' logs a "
			"lot of detailed information.");

		app.add_option("--debug-output", option.debugOuputStr,
			"Print internal debugging info to the terminal and a file in "
			"the configuration directory or to the terminal and a file "
			"called spyder-debug.log in the current working directory. "
			"Default is 'terminal'.");

		app.add_option("--safe-mode", option.isSafeMode,
			"Start Spyder with a clean configuration directory");

		app.add_option("conf-dir", option.confDirStr,
			"Choose a configuration directory to use for Spyder.");

		CLI11_PARSE(app, argc, argv);
	}
};