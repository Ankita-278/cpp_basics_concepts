#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //declaring an object of the type ofstream
    ofstream out;
    //connecting the object out to the text file using the member function open()
    out.open("sample55.txt");
    //writing to the file
    out<<"this is me\n";
    out<<"this is also me";
    //closing the file connection
    out.close();
    return 0;
}