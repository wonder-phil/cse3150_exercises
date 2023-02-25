#include <iostream>

enum VALYES {
      TOTAL = 10
};

int main()  {
  using namespace std;
  int* px = new int[TOTAL];

  for (int i = 0; i < TOTAL; i++ ) {
    px[i] = i;
  }

  for (int i = 0; i < TOTAL; i++ ) {
    cout << "px["
	 << i
	 << "] = "
	 << px[i]
	 << endl;    
  }

  cout << "px = " << px << endl;
  
  delete[] px;
  return 0;
}
