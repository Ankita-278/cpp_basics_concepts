#include<iostream>
using namespace std;

//static int c=0;//this will execute only once
//c=c+1;//next time function is run,the value of c will be retained
// inline int product(int a,int b){
//         return a*b;
// }

//Default Argument
float moneyReceived(int currentMoney,float factor=1.04){
    return currentMoney*factor;
}
int main(){
     int a,b;
    // cout<<"Enter the values of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    // cout<<"The product of a and b "<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have money "<< money<<" Rs in your bank account,you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
    cout<<"FOR VIP:If you have "<<money <<" Rs in your bank account,you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year ";
    return 0;
}