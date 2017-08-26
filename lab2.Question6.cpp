#include <iostream>
#include <cmath>
using namespace std;


int main() {

float num, result;

  cout << "Enter any number.\n  ";
  cin >>num;
  
  result = pow(num, 0.5);

  cout << "The square root of "<<num<<" is "<< result<<'.';
    
  return 0;
}
