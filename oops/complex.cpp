#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void getnumber(int a1, int b1)
    {
        cout << endl;
        a = a1;
        b = b1;
    }

    void printcomplex()
    {
        cout << endl;
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
    complex sumOfComplex(complex q, complex z);
};
complex complex ::sumOfComplex(complex q, complex z)
{
    complex x;
    x.getnumber(q.a + z.a, q.b + z.b);
    return x;
}
int main()
{
    complex c1, c2, c3;
    c1.getnumber(7, 6);
    c1.printcomplex();
    c2.getnumber(3, 1);
    c2.printcomplex();
    c3=c3.sumOfComplex(c1, c2);
    c3.printcomplex();
    return 0;
}