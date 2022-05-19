#include <iostream>
#include <conio.h>
using namespace std;
void nod(int x, int y, int& z);
void socr(int& x, int& y);
int main()
{
    double a, b, c, d;
    int x, y;
    cout << "Input numbers A & B (A/B):" << endl;
    cin >> a >> b;
    cout << "Input numbers C & D (C/D):" << endl;
    cin >> c >> d;
    x=a*d-c*b;
    y=d*b;
    socr(x,y);
    cout << "x=" << x<< " y=" << y<< endl;
    _getch();
    return 0;
}
void nod(int x, int y, int& z)
{while (x!=y)
{if (x>y)
x=x-y;
else y=y-x;
 }
z=x;
}
void socr(int& x, int& y)
{int z;
nod(x,y,z);
x=x/z;
y=y/z;
}
