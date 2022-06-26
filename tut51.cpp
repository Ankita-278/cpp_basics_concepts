#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_Base=1;
    virtual void display()
    {
        cout << " 1 Displaying Base class variable var_Base " << var_Base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=2;
    void display()
    {
        cout << " 2 Displaying Base class varivale var_Base " << var_Base << endl;
        cout << " 2 Displaying Derived class varivale var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}