#ifndef COLOR_SYSTEM_H
#define COLOR_SYSTEM_H

#include <string>
using std::string;

namespace core {
struct Green {
  string B0 = "#000000";
  string B10 = "#064738";
  string B20 = "#055C49";
  string B30 = "#007A5E";
  string B40 = "#008760";
  string B50 = "#019D70";
  string B60 = "#02BA85";
  string B70 = "#20C997";
  string B80 = "#44DEB0";
  string B90 = "#3BEBB7";
  string B100 = "#88F2D3";
  string B110 = "#B0F5E1";
  string B120 = "#D1FBEE";
  string B130 = "#E4FFF7";
  string B140 = "#F5FFFD";
  string B150 = "#FFFFFF";
};

struct Red {
  string B0 = "#000000";
  string B10 = "#470606";
  string B20 = "#760B0B";
  string B30 = "#AF0F0F";
  string B40 = "#D4140B";
  string B50 = "#DE321F";
  string B60 = "#E24232";
  string B70 = "#E74C3C";
  string B80 = "#F66657";
  string B90 = "#F88478";
  string B100 = "#FFACA4";
  string B110 = "#FFC3BD";
  string B120 = "#FEDDDA";
  string B130 = "#FFEEEE";
  string B140 = "#FFF5F5";
  string B150 = "##FFFFFF";
};

struct Orange {
  string B0 = "#000000";
  string B10 = "#471D06";
  string B20 = "#692907";
  string B30 = "#AB3E00";
  string B40 = "#CE4B01";
  string B50 = "#E05E15";
  string B60 = "#E57004";
  string B70 = "#F37E12";
  string B80 = "#FF993B";
  string B90 = "#FFB950";
  string B100 = "#FFCF84";
  string B110 = "#FFDDA7";
  string B120 = "#FFEACA";
  string B130 = "#FFF3E2";
  string B140 = "#FFFBF5";
  string B150 = "##FFFFFF";
};

struct GroupDark {
  string B10 = "#E11C1C";
  string B20 = "#FF8A00";
  string B30 = "#88BA00";
  string B40 = "#2DB500";
  string B50 = "#3FC6F0";
  string B60 = "#107EEC";
  string B70 = "#5C47E0";
  string B80 = "#7F27C5";
  string B90 = "#C88AFA";
  string B100 = "#AF2294";
  string B110 = "#DB4D8E";
  string B120 = "#38D4A4";
};

struct GroupLight {
  string B10 = "#FF6700";
  string B20 = "#FFB000";
  string B30 = "#FFE600";
  string B40 = "#7FDD05";
  string B50 = "#00A585";
  string B60 = "#22BCF2";
  string B70 = "#1256CC";
  string B80 = "#803AD0";
  string B90 = "#B568F2";
  string B100 = "#CC2782";
  string B110 = "#FF71BF";
  string B120 = "#7EE8C7";
};

struct LogoColor {
  string B10 = "#3775a9";
  string B20 = "#ffd444";
  string B30 = "#414141";
  string B40 = "#fafafa";
  string B50 = "#ee0000";
};

}  // namespace core

#endif