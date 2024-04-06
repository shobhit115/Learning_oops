#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setdata(int a)
    {
        data = a;
    }
    friend void sumof(X, Y);
};
class Y
{
    int num;

public:
    void setdata(int a)
    {
        num = a;
    }
    friend void sumof(X, Y);
};
void sumof(X n1, Y n2)
{
    cout << "sum is " << n1.data + n2.num << endl;
}
int main()
{
    X a;
    Y b;
    a.setdata(1000);
    b.setdata(2000);
    sumof(a, b);
    return 0;
}