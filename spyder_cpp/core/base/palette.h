#ifndef PALETTE_H
#define PALETTE_H

#include "color_system.h"

namespace core {
map<string, string> SpyderPaletteDarkMap = {
    {"COLOR_SUCCESS_1", GreenColorMap["B40"]},
    {"COLOR_SUCCESS_2", GreenColorMap["B70"]},
    {"COLOR_SUCCESS_3", GreenColorMap["B110"]},

    {"COLOR_ERROR_1", RedColorMap["B40"]},
    {"COLOR_ERROR_2", RedColorMap["B70"]},
    {"COLOR_ERROR_3", RedColorMap["B110"]},

    {"COLOR_WARN_1", OrangeColorMap["B40"]},
    {"COLOR_WARN_2", OrangeColorMap["B70"]},
    {"COLOR_WARN_3", OrangeColorMap["B90"]},

    // Icon colors
    {"ICON_1", GrayColorMap["B140"]},
    {"ICON_2", BlueColorMap["b80"]},
    {"ICON_3", GreenColorMap["B80"]},
    {"ICON_4", RedColorMap["B70"]},
    {"ICON_5", OrangeColorMap["B70"]},
    {"ICON_6", GrayColorMap["B30"]},

    // Colors for iconsand variable explorer in dark mode
    {"GROUP_1", GroupDarkColorMap["B10"]},
    {"GROUP_2", GroupDarkColorMap["B20"]},
    {"GROUP_3", GroupDarkColorMap["B30"]},
    {"GROUP_4 ", GroupDarkColorMap["B40"]},
    {"GROUP_5 ", GroupDarkColorMap["B50"]},
    {"GROUP_6 ", GroupDarkColorMap["B60"]},
    {"GROUP_7 ", GroupDarkColorMap["B70"]},
    {"GROUP_8 ", GroupDarkColorMap["B80"]},
    {"GROUP_9", GroupDarkColorMap["B90"]},
    {"GROUP_10", GroupDarkColorMap["B100"]},
    {"GROUP_11", GroupDarkColorMap["B110"]},
    {"GROUP_12", GroupDarkColorMap["B120"]},

    // Colors for highlight in editor
    {"COLOR_HIGHLIGHT_1", BlueColorMap["B10"]},
    {"COLOR_HIGHLIGHT_2", BlueColorMap["B20"]},
    {"COLOR_HIGHLIGHT_3", BlueColorMap["B30"]},
    {"COLOR_HIGHLIGHT_4", BlueColorMap["B50"]},

    // Colors for ocurrences from find widget
    {"COLOR_OCCURRENCE_1", GrayColorMap["B10"]},
    {"COLOR_OCCURRENCE_2", GrayColorMap["B20"]},
    {"COLOR_OCCURRENCE_3", GrayColorMap["B30"]},
    {"COLOR_OCCURRENCE_4", GrayColorMap["B50"]},

    // Colors for Spyderand Python logos
    {"PYTHON_LOGO_UP", LogoColorMap["B10"]},
    {"PYTHON_LOGO_DOWN ", LogoColorMap["b20"]},
    {"SPYDER_LOGO_BACKGROUND", LogoColorMap["B30"]},
    {"SPYDER_LOGO_WEB", LogoColorMap["B40"]},
    {"SPYDER_LOGO_SNAKE", LogoColorMap["B50"]}};

map<string, string> SpyderPaletteLightMap = {
    // Colors for information and feedback in dialogs
    {"COLOR_SUCCESS_1", GreenColorMap["B40"]},
    {"COLOR_SUCCESS_2", GreenColorMap["B70"]},
    {"COLOR_SUCCESS_3", GreenColorMap["B110"]},

    {"COLOR_ERROR_1", RedColorMap["B40"]},
    {"COLOR_ERROR_2", RedColorMap["B70"]},
    {"COLOR_ERROR_3", RedColorMap["B110"]},

    {"COLOR_WARN_1", OrangeColorMap["B40"]},
    {"COLOR_WARN_2", OrangeColorMap["B70"]},
    {"COLOR_WARN_3", OrangeColorMap["B50"]},

    // Icon colors
    {"ICON_1", GrayColorMap["B30"]},
    {"ICON_2", GrayColorMap["B50"]},
    {"ICON_3", GrayColorMap["B30"]},
    {"ICON_4", RedColorMap["B70"]},
    {"ICON_5", OrangeColorMap["B70"]},
    {"ICON_6", GrayColorMap["B140"]},

    // Colors for icons and variable explorer in light mode
    {"GROUP_1", GroupLightColorMap["B10"]},
    {"GROUP_2", GroupLightColorMap["B20"]},
    {"GROUP_3", GroupLightColorMap["B30"]},
    {"GROUP_4", GroupLightColorMap["B40"]},
    {"GROUP_5", GroupLightColorMap["B50"]},
    {"GROUP_6", GroupLightColorMap["B60"]},
    {"GROUP_7", GroupLightColorMap["B70"]},
    {"GROUP_8", GroupLightColorMap["B80"]},
    {"GROUP_9", GroupLightColorMap["B90"]},
    {"GROUP_10", GroupLightColorMap["B100"]},
    {"GROUP_11", GroupLightColorMap["B110"]},
    {"GROUP_12", GroupLightColorMap["B120"]},

    // Colors for highlight in editor
    {"COLOR_HIGHLIGHT_1", BlueColorMap["B140"]},
    {"COLOR_HIGHLIGHT_2", BlueColorMap["B130"]},
    {"COLOR_HIGHLIGHT_3", BlueColorMap["B120"]},
    {"COLOR_HIGHLIGHT_4", BlueColorMap["B110"]},

    // Colors for ocurrences from find widget
    {"COLOR_OCCURRENCE_1", GrayColorMap["B120"]},
    {"COLOR_OCCURRENCE_2", GrayColorMap["B110"]},
    {"COLOR_OCCURRENCE_3", GrayColorMap["B100"]},
    {"COLOR_OCCURRENCE_4", GrayColorMap["B90"]},

    // Colors for Spyder and Python logos
    {"PYTHON_LOGO_UP", LogoColorMap["B10"]},
    {"PYTHON_LOGO_DOWN", LogoColorMap["B20"]},
    {"SPYDER_LOGO_BACKGROUND", LogoColorMap["B30"]},
    {"SPYDER_LOGO_WEB", LogoColorMap["B40"]},
    {"SPYDER_LOGO_SNAKE", LogoColorMap["B50"]},
};  // namespace core

}  // namespace core

#endif