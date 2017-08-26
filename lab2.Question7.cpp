#include <iostream>

using namespace std;


int main() {

int a1,a2,a3;

  cout << "Enter an angle of a triangle.\n  ";
  cin >>a1;
  cout<<"angle 1 is= "<<a1<<" degree.\n";
  cout << "Enter another angle of the triangle.\n  ";
  cin >>a2;
  cout<<"angle 2 is= "<<a2<<" degree.\n";
  a3= 180-(a1+a2);
  cout <<"The 3rd angle is "<<a3<<" degree"<<'.';
  
    
  return 0;
}
