#include <iostream>
#include <vector>
int main(){
  std::cout<<"Enter two numbers: ";
  int first, second,sum;
  sum=0;
  std::vector<int> nums;
  std::cin>> first>> second;
  nums.push_back(first);
  nums.push_back(second);
  if(nums[0] > nums[1]){
    std::cout<<"Enter bober";
  }
  else{
    for(int i = nums[0];i <= nums[1]; i++){
      sum = sum + i;
    }
  }
  std::cout<<"SUmrange of "<< nums[0]<< " and "<< nums[1]<< " is "<< sum;
  return 0;
  
  
}

 
