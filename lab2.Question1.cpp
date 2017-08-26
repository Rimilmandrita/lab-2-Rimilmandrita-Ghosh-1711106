#include <iostream>
using namespace std;


int main() {
float dist,m,km;
cout<<"Enter a distance in centimeter.\n";
cin>>dist;
cout<<"The distance in centimeter is:"<<dist<<'.'<<'\n';
m= dist/100;
cout<<"The distance in meter is:"<<m<<'.'<<'\n';
km= dist/10000;
cout<<"The distance in kilometer is:"<<km<<'.'<<'\n';
return(0);


}
