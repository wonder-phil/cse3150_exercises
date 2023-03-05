#include <iostream>
#include <vector>

template<typename InputIterator, typename OutputIterator>
OutputIterator mycopy(InputIterator from, InputIterator to, OutputIterator into) {

  while (from != to) {
    *into = *from;
    ++from;
    ++into;
  }
    return into;
}



