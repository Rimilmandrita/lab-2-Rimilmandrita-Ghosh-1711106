#include <iostream>
#include <cmath>
using namespace std;


int main() {

float side,area;

  cout << "Enter the side length of an equilateral triangle.\n  ";
  cin >> side;
  cout<<"The side is = "<< side << " units.\n";
  area = pow(3,0.5)*pow(side,2 )/4;

  cout << "The area is" << area << "units.";
    
  return 0;
}
