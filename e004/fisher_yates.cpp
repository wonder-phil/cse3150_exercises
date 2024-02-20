#include <iostream>
#include <random>
#include "fisher_yates.h"


using namespace std;

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void show_data(int array[], const int length) {
  for (int i=0; i < length; i++) {
    cout << array[i] << " ";
  }
}

void fisher_yates(int array[], const int length, int (* random_fcn)()) {
  for (int i = 0; i < length -1; i++) {
    int rnd_location = random_fcn() % (length -i);
    swap(& array[i], & array[rnd_location + i]);
  }
}

/*

    cout << "mod " << (length  -i)
	 << " and r_location " << rnd_location
	 << " and i = " << i << endl;
  
*/
