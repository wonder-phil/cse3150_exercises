#include <iostream>

#include "prefix_sum.h"



int main()
{
  using namespace std;

  int nums_0[] = {1,-1};
  int nums_1[] = {1,-1, 1,-1};
  int nums_2[] = {-1,1};

  std::cout << sizeof(nums_0)/sizeof(nums_0[0]) << std::endl;
  
  std::cout << prefix_sum(nums_0,sizeof(nums_0)/sizeof(nums_0[0]));

  cout << endl;
  
 

  return 0;
}