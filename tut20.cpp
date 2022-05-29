#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this employee number " << count << endl;
    }
    
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee ::count; // default value is 0
int main()
{
   Employee ankita,deepu,anju;
   //harry.id=1; cannot do this as id are private
   ankita.setData();
   ankita.getData();
   Employee::getcount();

   deepu.setData();
   deepu.getData();
   Employee::getcount();

   anju.setData();
   anju.getData();
   Employee::getcount();
   
    return 0;
}