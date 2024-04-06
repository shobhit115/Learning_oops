#include <iostream>
using namespace std;
class b;

class a
{
    int p;
    friend void exchange(a &, b &);

public:
    void getdata(int aa)
    {
        p = aa;
    }
    void printa()
    {
        cout << p << "   ";
    }
};
class b
{
    int q;
    friend void exchange(a &, b &);

public:
    void getdata(int aa)
    {
        q = aa;
    }
    void printa()
    {
        cout << q << "   ";
    }
};
void exchange(a &num1, b &num2)
{
    int n = num1.p;
    num1.p = num2.q;
    num2.q = n;
}
int main()
{
    a bhai;
    bhai.getdata(100);
    b shab;
    shab.getdata(200);
    bhai.printa();
    shab.printa();
    cout << endl;
    exchange(bhai, shab);
    bhai.printa();
    shab.printa();
}