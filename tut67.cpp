#include<iostream>
#include<map>
#include<string.h>
using namespace std;

int main(){
    map<string,int>marksMap;
    marksMap["ankita"]=98;
    marksMap["anu"]=59;
    marksMap["rohan"]=2;
    marksMap.insert({{"priya",75},{"anshu",87}});
    map<string,int>::iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    return 0;
}