#include <iostream>

enum VALYES {
	     TOTAL = 10
};

int main()  {
  using namespace std;
  int* px = new int[TOTAL];

  for (int *cx = px; cx < px + TOTAL; cx++ ) {
    *cx = cx - px;
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
