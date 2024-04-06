#include <bits/stdc++.h>
using namespace std;
class point
{
    int x;
    int y;
    friend float distancep(point, point);

public:
    point()
    {
        x = 0;
        y = 0;
    }
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printp()
    {
        cout << "The point is (" << x << "," << y << ")\n";
    }
};
float distancep(point p1, point p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}
int main()
{
    point a(3, 4);
    a.printp();
    point b;
    b = point();
    b.printp();
    float dis = distancep(a, b);
    cout << "\nTHe distance between them is " << dis;
}