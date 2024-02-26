
#include <istream>
#include <vector>

#include "ints_write.h"


std::ostream &operator<<(std::ostream &os, const std::vector<int> &input)
{
    for (auto const & i: input) {
        os << i << " ";
    }
    return os;
}
