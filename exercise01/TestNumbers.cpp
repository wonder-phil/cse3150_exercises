#include <iostream>

#include "ECNumbers.h"

int main()
{
  int nums[] = {2,3,3,2};
  int nums_1[] = {97,95,98,99,95,2};
  int nums_2[] = {2,97,95,98,99,95};

  //std::cout << sizeof(nums)/sizeof(nums[0]) << std::endl;
  
  ECRemoveSpace(nums,sizeof(nums)/sizeof(nums[0]), 2);
  ECRemoveSpace(nums_1,sizeof(nums_1)/sizeof(nums_1[0]),2);
  ECRemoveSpace(nums_2,sizeof(nums_2)/sizeof(nums_2[0]),2);  
 

  return 0;
}
