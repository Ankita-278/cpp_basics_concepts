#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_Base;
    void display()
    {
        cout << "Displaying Base class variable var_Base " << var_Base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class varivale var_Base " << var_Base << endl;
        cout << "Displaying Derived class varivale var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;

    base_class_pointer->var_Base = 34;
    // base_class_pointer->var_derived=134;//this will throw an error
    base_class_pointer->display();

    base_class_pointer->var_Base = 3400;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_Base = 9400;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->display();
    return 0;
}