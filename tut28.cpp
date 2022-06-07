#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
      complex(int ,int);
          void printNumber(){
              cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
          }
};
complex::complex(int x,int y)//this is a parameterized constructor as it takes 2 parameter
{
    a=x;
    b=y;
}
int main(){
    //Implicit call
    complex a(4,6);
    a.printNumber();
    complex b(5,7);
    b.printNumber();
    return 0;
}