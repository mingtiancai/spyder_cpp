#ifndef CLI_OPTION_H
#define CLI_OPTION_H

#include <string>

#include "base/print_base.h"

namespace core {
	struct CliOption : public BasePrint {
		bool isNewInstance = false;
		bool isResetToDefaults = false;
		bool isResetConfigFiles = false;
		bool isOptimize = false;
		bool isHideConsole = false;
		bool isMultithread = false;
		bool isProfile = false;
		bool isPaths = false;
		std::string debugInfoStr = "";
		std::string debugOuputStr = "";
		bool isSafeMode = false;
		std::string confDirStr = "";

		std::string print() {
			std::string resultStr;

			resultStr += "isNewInstance: " + std::to_string(isNewInstance);
			resultStr += "\n";

			resultStr += "isResetToDefaults: " + std::to_string(isResetToDefaults);
			resultStr += "\n";

			resultStr += "isResetConfigFiles: " + std::to_string(isResetConfigFiles);
			resultStr += "\n";

			resultStr += "isOptimize: " + std::to_string(isOptimize);
			resultStr += "\n";

			resultStr += "isHideConsole: " + std::to_string(isHideConsole);
			resultStr += "\n";

			resultStr += "isMultithread: " + std::to_string(isMultithread);
			resultStr += "\n";

			resultStr += "isProfile: " + std::to_string(isProfile);
			resultStr += "\n";

			resultStr += "isPaths: " + std::to_string(isPaths);
			resultStr += "\n";

			resultStr += "debugInfoStr: " + debugInfoStr;
			resultStr += "\n";

			resultStr += "debugOuputStr: " + debugOuputStr;
			resultStr += "\n";

			resultStr += "isSafeMode: " + std::to_string(isSafeMode);
			resultStr += "\n";

			resultStr += "confDirStr: " + confDirStr;
			resultStr += "\n";

			return resultStr;
		}
	};

	int getOption(int argc, char** argv, CliOption& option);
};  // namespace core

#endif  // !CLI_OPTION_H