#include <iostream>


int fact(int n) {
  if (n <= 1)
    return 1;
  else {
    int rc = fact(n-1); 
    if (rc < 0) throw std::string("Overflow");
    return rc* n;

  }
}

int main() {

  try{
    int ten_fact = fact(10);
    std::cout << "Result is: " << ten_fact << std::endl;
    int x = fact(20);
    std::cout << "Result is: " << x << std::endl;
  } catch (std::string s) {
    std::cout << "Something went wrong! " << s << std::endl;
    return 1;
  }

  return 0;
}
