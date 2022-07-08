#include<iostream>
using namespace std;
template<class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data=a;
    }
};
template<class T>{
    void Harry<T>::display()
        cout<<data;
    }
void fun(int a){
    cout<<"I am first func()"<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"I am templatised func()"<<a<<endl;
}
int main(){
   // Harry<float>h(7.5);
   // Harry<char>h('c');
   //Harry<int>h(87);
    //cout<<h.data<<endl;
   // h.display();
    func(4); //exact match takes the highest priority
    return 0;
}