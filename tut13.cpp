#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}
//this will not swap a and b
void swap(int a, int b){  // temp a b
    int temp=a;           // 4    4 5
    a=b;                  // 4    5 5
    b=temp;               // 4    5 4
}

//call by Reference using pointers
void swapPointer(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;
}

//call by Reference using reference variables
//int & 
void swapReferenceVar(int &a,int &b){
   int temp=a;
    a=b;
    b= temp;
   // return a;

}
int main(){
    int a=4,b=5;
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // swap(a,b); //this will not swap a and b
   // swapPointer(&a,&b);//this will swap a and b using pointer reference
    swapReferenceVar(a,b); //this will swap a and b using reference variables
   //swapReferenceVar(a,b)=37; //this will swap and change the value of a
     cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}