#include <iostream>
#include <random>
using namespace std;
int main(){

  srand(time(NULL));

  int numbers[9];
  for(int i=0;i<10;i++){
    numbers[i]=rand() % 101;
  }
  int min = numbers[0], max = numbers[0];
  cout<<"The numbers are: ";
  for(int i=0; i<10;i++){
    cout<<numbers[i]<< " ";
  }
  for(int i=0; i<10;i++){
    if(numbers[i] < min){
      min = numbers[i];
    }
    else if(numbers[i] > max){
      max = numbers[i];
    }
  }
  cout<<endl<<"The min number is: "<< min<<" while the largest is: "<<max; 
 
  return 0;
}
