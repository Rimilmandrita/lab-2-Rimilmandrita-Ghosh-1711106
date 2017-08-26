#include <iostream>
#include <cmath>
using namespace std;


int main() {
float mcs,mchem, mphy, mmath, meng, mtotal;
float avg, perc;
	
        cout<<"Enter marks obtained in Physics, Chemistry, Mathematics, Computer science, English :";
        cin>>mchem;   
        cout<<"\nMarks in Chemistry:"<<mchem<<'.';
        cin>>mphy;   
        cout<<"\nMarks in Physics:"<<mphy<<'.';
        cin>>mmath;   
        cout<<"\nMarks in Mathematics:"<<mmath<<'.';
        cin>>mcs;   
        cout<<"\nMarks in Computer science:"<<mcs<<'.';
        cin>>meng;   
        cout<<"\nMarks in English:"<<meng<<'.';
        mtotal=mcs +mchem+ mphy+ mmath+ meng;
	cout<<"\nTotal marks obtained by the student:"<< mtotal<<'.';
          avg=mtotal/5;
          perc=(mtotal/500)*100;
        cout<<"\nAverage Marks = "<<avg<<'.';
        cout<<"\nPercentage = "<<perc<<"%"<<'.';// your code goes here
	return 0;

}
