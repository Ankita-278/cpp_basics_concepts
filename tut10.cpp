#include<iostream>
using namespace std;

int main(){
    int marks[4] = {23, 45, 97, 99};

    //cout<<marks[0]<<endl;
    //cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;

    //do while loop
    //int i=0;
    //do{
    //    cout<<marks[i]<<endl;
    //    i++;
    //}while(i<4);
   
   int* p=marks;
    cout<<"the value at *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
     return 0;
}