#include<iostream>
using namespace std;

class complex{
int a,b;
  public:
complex(void);

void printNumber()
{
    cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
}
};
complex ::complex(void){
    a=5;
    b=10;
}
int main(){
    complex p;
    p.printNumber();

    return 0;
}