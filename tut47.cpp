#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
        void getData(){
            
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
        }
    void setData(int a,int b){
        real=a;
        imaginary=b;
    }
};

int main(){
    Complex *ptr=new Complex;
    //(*ptr).setData(1,15);
    //arrow operator
    ptr->setData(1,0);
    //(*ptr).getData();
    ptr->getData();

    //array of object
    Complex *ptr1=new Complex[4];
    ptr->setData(1,4);
    ptr->getData();
    return 0;
}