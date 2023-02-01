#include <iostream>

int main()  {
  using namespace std;
  char s2[] = "Hello";
  char *p = s2;
  *p = 'T';
  cout << "s2 = " << s2 << endl;

  return 0;
}
