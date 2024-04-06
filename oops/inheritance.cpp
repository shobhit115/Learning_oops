#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 334.0;
    }
    Employee() {}
};
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skill(1);
    skill.getdata();
    cout << skill.id;
    return 0;
}