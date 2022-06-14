#include <iostream>
#include<cmath>
using namespace std;

class simplecalculator
{
protected:
    int x;
    int y;

public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    void process()
    {
        cout << "The addition is " << x + y << endl;
        cout << "The substraction is " << x - y << endl;
        cout << "The multiplication is " << x * y << endl;
        cout << "The division is " << x / y << endl;
    }
};
class ScientificCalculator
{
protected:
    int x, y;

public:
    void process()
    {
        cout << "The square root if x is " << sqrt(x) << endl;
        cout << "The square root if y is " << sqrt(y) << endl;
        cout << "The cube root if x is " << cbrt(x) << endl;
        cout << "The cube root if y is " << cbrt(y) << endl;
    }
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
};
class hybrid : public simplecalculator, public ScientificCalculator
{
public:
    void masterset(int a, int b)
    {
        simplecalculator::setData(a, b);
        ScientificCalculator::setData(a, b);
        simplecalculator::process();
        ScientificCalculator::process();
    }
};
int main()
{
    int p, q;
    hybrid h;
    cout << "Enter two values " << endl;
    cin >> q >> p;
    h.masterset(p, q);
    return 0;
}