#ifndef __MOST_COMMON_H
#define __MOST_COMMON_H

#include "iostream"

template<typename T>
std::ostream& operator << (std::ostream& os, const std::vector<T>& A) {
  bool first = true;
  for (auto& e : A) {
    if (!first) {
      os << " ";
    }
    os << e;
    first = false;
  }
  return os;
}

template<typename T>
std::ostream& operator << (std::ostream& os, const std::set<T>& A) {
  bool first = true;
  for (auto& e : A) {
    if (!first) {
      os << " ";
    }
    os << e;
    first = false;
  }
  return os;
}

#endif // __MOST_COMMON_H
