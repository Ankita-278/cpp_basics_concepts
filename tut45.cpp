#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
    Test(int i,int j):a(i),b(j){
        cout<<"Constructor is executed"<<endl;
        cout<<"The value of a "<<a<<endl;
        cout<<"The value of b "<<b<<endl;
    }
};
int main(){
    Test t(6,10);
    return 0;
}