#include<iostream>
#include<cmath>
 
using namespace std;
 
int main()
{
    int t1,t2;
    float p,r,ci,y;
    cout<<"Enter Principle amount.";
    cin>>p;
    cout<<"\nPrinciple deposited is :"<<p<<" rs.\n";
    cout<<"\nEnter Rate of compound interest per year. ";
    cin>>r;
    cout<<"\nEnter the no. of times the interest is compounded in a year.";
    cin>>t2;
    cout<< "\nEnter the time(in days).";
    cin>>t1;
    cout<<"\n The rate of interest is: "<<r<<"%"<< " per annum"<< " compounded " << t2<<" times in a year.";
    
    y=t1/365;
   ci=p*pow((1+r/t2/100),(y*t2));
    
    cout<<"\nCompound Interest = "<<ci;
return 0;
}
