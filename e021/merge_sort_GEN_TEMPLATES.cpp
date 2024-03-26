#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

std::ostream &operator<<(std::ostream &os, const std::vector<int> &input)
{
    for (auto const &i: input) {
        os << i << " ";
    }
    return os;
}


template<typename T, typename InputIterator, typename F>
void merge_sort_aux(std::vector<T> & v, InputIterator from, InputIterator to, const F & cmp) {
  // [from, to)
  if (v.empty() || next(from) == to) {
    return;
  } else {
    auto d = from + (to-from)/2;
    merge_sort_aux(v, from, d, cmp);
    merge_sort_aux(v, d, to, cmp);
    std::vector<T> a(from,d), b(d,to);

    auto i = a.begin(),j = b.begin(), k = from;
    while (i != a.end() && j != b.end()) {
      if (cmp(*i,*j))
	      *k++ = *i++;
      else
	      *k++ = *j++;
    }
    while (i != a.end()) *k++ = *i++;
    while (j != b.end()) *k++ = *j++;    
  }
}


template<typename T, typename F>
void merge_sort(std::vector<T> & v, const F & cmp) {
  return merge_sort_aux(v, v.begin(), v.end(), cmp);
}

