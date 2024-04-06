#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void getdata()
    {
        cout << "the id of this employee is" << id << "and his employee number is " << count;
    }
    void setdata()
    {
        cout << endl
             << "enter id" << endl;
        cin >> id;
        count++;
    }
};
int employee ::count = 100;
int main()
{
    employee harry, rohit;
    harry.setdata();
    harry.getdata();
    rohit.setdata();
    rohit.getdata();
    harry.getdata();
}