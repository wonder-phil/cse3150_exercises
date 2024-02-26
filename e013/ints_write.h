#ifndef _INTS_WRITE_H_
#define _INTS_WRITE_H_

#include <istream>
#include <vector>

#include "ints_write.h"


std::ostream &operator<<(std::ostream &os, const std::vector<int> &input);

#endif