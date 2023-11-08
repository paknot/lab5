#include <iostream>
using namespace std;
bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }

  for (int i = 2; i <= num / 2; ++i) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}
int main(){

  int number;
  cout<<"Enter a integer: ";
  cin>>number;
  cout<<endl;
  if((number % 2) != 0) {
    cout<<"Primes to "<< number<<" are: ";
  for(int i=2; i<= number; i++){
    if(isPrime(i)) {
      cout<<i<< " ";
    }
    
  }
 }
  else{cout<<"Not a prime";}
  return 0;
}
