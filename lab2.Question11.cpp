#include <iostream>
#include <cmath>
using namespace std;


int main() {

    float p,t;
    float r,si,y;
    cout<<"Enter Principle amount.";
    cin>>p;
    cout<<"\nPrinciple deposited is :"<<p<<" rs.\n";
    cout<<"Enter Rate of interest per year. ";
    cin>>r;
    cout<<"\nRate of simple interest is :"<<r<< " %" << " per year.\n";
    cout<<"\nEnter Time in days. ";
    cin>>t;
    y=t/365;
    si=(p*r*y)/100;
    cout<<"\nSimple interest is : "<<si<<'.';
return 0;

}
