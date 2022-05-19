#include <iostream>
#include <conio.h>
using namespace std;
double power (int x);
double fact (int n);
int main()
{
    int n, k=1;
    double x;
    cout<<"n=";
    cin>>n;
    do
    {
     x+=fact(k)/power(n);
     k++;
    }
    while (k<=n);
    cout<<"x="<<x<<endl;
 _getch();
 return 0;
}

double power (int x)
{
    double s, k;
    k=1;
    do
    {
        k++;
        s+=1.0/k;
    }
    while (k<=x);
    return s;
}

double fact(int n)
{
 int i;
 double res;
 res = 1;
 for (i = 1; i <= n; i++) {
	res = res * i;
  }
  return res;
}
