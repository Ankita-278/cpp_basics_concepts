#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="Ankita kumari";//opening files using constructor and writing it
    ofstream out("sample54.txt");//write operation
    out<<st;
    return 0;
}