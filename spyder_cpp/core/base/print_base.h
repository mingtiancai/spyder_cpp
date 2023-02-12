#ifndef PRINT_BASE_H
#define PRINT_BASE_H

#include <string>

struct BasePrint {
  virtual std::string print() = 0;
};

#endif