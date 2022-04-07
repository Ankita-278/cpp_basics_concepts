#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//maipulator in cpp
int a=3,b=78,c=1233;
cout<<"the value of a without setw is a:"<<a<<endl;
cout<<"the value of a without setw is b:"<<b<<endl;
cout<<"the value of a without setw is c:"<<c<<endl;

cout<<"the value of a is a:"<<setw(4)<<a<<endl;
cout<<"the value of a is b:"<<setw(4)<<b<<endl;
cout<<"the value of a is c:"<<setw(4)<<c<<endl;
    return 0;
}