#include<iostream>
using namespace std;

struct employee
{
 int eId;
 char favChar;
 float salary;
};

union money
{
    int rice;
    char car;
    float pound;
};


int main(){
    enum meal{breakfast,lunch,dinner};
    meal m1=lunch;
    cout<<m1;
    // cout<<breakfast<<endl;;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // union money m1;
    // m1.rice=37;
    // cout<<m1.rice;

   // struct employee ankita;
   // ankita.eId=1;
   // ankita.favChar='c';
   // ankita.salary=12000000;
   // cout<<"the value is "<<ankita.eId<<endl;
   // cout<<"the value is "<<ankita.favChar<<endl;
   // cout<<"the value is "<<ankita.salary<<endl;
    return 0;
}