#ifndef COLOR_SYSTEM_H
#define COLOR_SYSTEM_H

#include <map>
#include <string>
using std::map;
using std::string;
namespace core {

map<string, string> GreenColorMap = {
    {"B0", "#000000"},   {"B10", "#064738"},  {"B20", "#055C49"},
    {"B30", "#007A5E"},  {"B40", "#008760"},  {"B50", "#019D70"},
    {"B60", "#02BA85"},  {"B70", "#20C997"},  {"B80", "#44DEB0"},
    {"B90", "#3BEBB7"},  {"B100", "#88F2D3"}, {"B110", "#B0F5E1"},
    {"B120", "#D1FBEE"}, {"B130", "#E4FFF7"}, {"B140", "#F5FFFD"},
    {"B150", "#FFFFFF"}};

map<string, string> RedColorMap = {
    {"B0 ", "#000000"},   {" B10", "#470606"},  {"B20", "#760B0B"},
    {"B30", "#AF0F0F"},   {"B40", "#D4140B"},   {"B50", "#DE321F"},
    {"B60", "#E24232"},   {"B70", "#E74C3C"},   {"B80", "#F66657"},
    {"B90", "#F88478"},   {"B100", "#FFACA4"},  {"B110 ", "#FFC3BD"},
    {"B120 ", "#FEDDDA"}, {"B130 ", "#FFEEEE"}, {"B140 ", "#FFF5F5"},
    {"B150 ", "#FFFFFF"}};

map<string, string> OrangeColorMap = {
    {"B0", "#000000"},    {"B10", "#471D06"},   {"B20 ", "#692907"},
    {"B30 ", "#AB3E00"},  {"B40 ", "#CE4B01"},  {"B50 ", "#E05E15"},
    {"B60 ", "#E57004"},  {"B70 ", "#F37E12"},  {"B80 ", "#FF993B"},
    {"B90 ", "#FFB950"},  {"B100", "#FFCF84"},  {"B110 ", "#FFDDA7"},
    {"B120 ", "#FFEACA"}, {"B130 ", "#FFF3E2"}, {"B140 ", "#FFFBF5"},
    {"B150 ", "#FFFFFF"}};

map<string, string> GroupDarkColorMap{
    {"B10", "#E11C1C"},  {"B20", "#FF8A00"},  {"B30", "#88BA00"},
    {"B40", "#2DB500"},  {"B50", "#3FC6F0"},  {"B60", "#107EEC"},
    {"B70", "#5C47E0"},  {"B80", "#7F27C5"},  {"B90", "#C88AFA"},
    {"B100", "#AF2294"}, {"B110", "#DB4D8E"}, {"B120", "#38D4A4"}};

map<string, string> GroupLightColorMap{
    {"B10", "#FF6700"},  {"B20", "#FFB000"},  {"B30", "#FFE600"},
    {"B40", "#7FDD05"},  {"B50", "#00A585"},  {"B60", "#22BCF2"},
    {"B70", "#1256CC"},  {"B80", "#803AD0"},  {"B90", "#B568F2"},
    {"B100", "#CC2782"}, {"B110", "#FF71BF"}, {"B120", "#7EE8C7"}};

map<string, string> LogoColorMap{{"B10", "#3775a9"},
                                 {"B20", "#ffd444"},
                                 {"B30", "#414141"},
                                 {"B40", "#fafafa"},
                                 {"B50", "#ee0000"}};

map<string, string> GrayColorMap{
    {"B0 ", "#000000"},   {" B10", "#19232D"},  {"B20", "#293544"},
    {"B30", "#37414F"},   {"B40", "#455364"},   {"B50", "#54687A"},
    {"B60", "#60798B"},   {"B70", "#788D9C"},   {"B80", "#9DA9B5"},
    {"B90", "#ACB1B6"},   {"B100", "#B9BDC1"},  {"B110 ", "#C9CDD0"},
    {"B120 ", "#CED1D4"}, {"B130 ", "#E0E1E3"}, {"B140 ", "#FAFAFA"},
    {"B150 ", "#FFFFFF"}};

map<string, string> BlueColorMap{
    {"B0 ", "#000000"},   {" B10", "#062647"},  {"B20", "#26486B"},
    {"B30", "#375A7F"},   {"B40", "#346792"},   {"B50", "#1A72BB"},
    {"B60", "#057DCE"},   {"B70", "#259AE9"},   {"B80", "#37AEFE"},
    {"B90", "#73C7FF"},   {"B100", "#9FCBFF"},  {"B110 ", "#C2DFFA"},
    {"B120 ", "#CEE8FF"}, {"B130 ", "#DAEDFF"}, {"B140 ", "#F5FAFF"},
    {"B150 ", "#FFFFFF"}};

}  // namespace core

#endif