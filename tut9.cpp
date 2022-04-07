#include<iostream>
using namespace std;

int main(){
    int a=3;
    int* b=&a;
    cout<<"the address of a"<<&a<<endl;
    cout<<"the address of a"<<b<<endl;
    cout<<"the value of a "<<*b<<endl;
    //pointer to pointer
    int** c=&b;
    cout<<"the address of b"<<&b<<endl;
    cout<<"the address of b"<<c<<endl;
    cout<<"the value at address b is"<<*c<<endl;
    cout<<"the value of address value_at(value_at(c)) is"<<**c<<endl;
    return 0;
}