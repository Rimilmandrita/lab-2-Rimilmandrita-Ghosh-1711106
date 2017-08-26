#include <iostream>
using namespace std;


int main() {
int d, y,w;
 
    cout<<"Enter No. of days.\n";
    cin>>d;
    cout<<"The number of days is "<<d<<'.';
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
 
    cout<<"\nYears:"<<y<<','<<"Weeks:"<<w<<','<<"Days: "<<d;
    return 0;



}
