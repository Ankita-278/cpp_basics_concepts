#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st2;//opening files using constructor and reading it
    ifstream in("sample55.txt");//read operation
    in>>st2;
    getline(in,st2);
    cout<<st2;

    return 0;
}