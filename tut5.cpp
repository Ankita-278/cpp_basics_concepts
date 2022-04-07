#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
   switch(age){
       case 18:
       cout<<"you are 18"<<endl;
       break;
       case22:
       cout<<"you are 22"<<endl;
       break;
       case 2:
       cout<<"you are 2"<<endl;
       break;
       default:
       cout<<"no such cases"<<endl;
       break;
   }
    return 0;
}