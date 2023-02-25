#include <iostream>
#include "remove_in_place.h"

using namespace std;

void output_int_array(int nums[], int length) {
  for (int i = 0; i < length; i++) {
    cout << nums[i] << " ";
  }
}

int swap_val_2_end(int nums[], int length, int val) {

  int i = 0, backwards = length-1;
  int count_elements_to_delete = 0;

  cout << "Array ";
  output_int_array(nums,length);
  cout << " transformed to ";
  
  while( i <= backwards ) {
    if ( nums[i] == val ) {
      int temp = nums[backwards];
      nums[backwards] = nums[i];
      nums[i] = temp;
      backwards--;
      count_elements_to_delete++;
    } else {
      i++;
    }
  }

  output_int_array(nums,length);  
  cout << " has "
       << count_elements_to_delete
       << " elements to be replaced" << endl;

  return count_elements_to_delete;
}


void delete_end_elements(int nums[], const int length, const int end_element) {
  for (int i = 0; i < length; i++) {
    if ( end_element == nums[i] ) {
      cout << "_ " ;
      nums[i] = 0;
    } else {
      cout << nums[i] << " ";
    }
  }

  cout << endl;
}
