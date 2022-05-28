#include<iostream>
using namespace std;

//function overloading
int sum(int a,int b){
     cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a,int b,int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
//calculate volume of cylinder
int volume(int r,int h){
    return(3.14*r*r*h);
}
 
 //calculate volume of cube
 int volume(int a){
     return(a*a*a);
 }

//calculate volume of cuboid
int volume(int l,int b,int h){
    return(l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 5 and 6 is "<<sum(3,5,6)<<endl;
    cout<<"The volume cuboid of length 3, breadth 5 and height 6 is "<<volume(3,5,6)<<endl;
    cout<<"The volume of cude is 3 "<<volume(3)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 5 is "<<volume(3,5)<<endl;
      return 0;
}