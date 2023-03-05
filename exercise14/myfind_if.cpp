#include <iostream>
#include <vector>
#include <list>

template<typename InputIterator, typename Predicate>
InputIterator myfind_if(InputIterator from, InputIterator to, Predicate p) {

  while (from != to) {
    if (p(*from)) {
      return from;
    }
    ++from;
  }
  return from;
}



