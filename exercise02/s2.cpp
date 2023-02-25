#include <iostream>

int main() {

  std::cout << "Please enter your name:";
  std::string name;
  std::cin >> name;
  std::cout << "Hello "
	    << name
	    << " !"
	    << std::endl;

  return 0;
}
