// hw6_15,
#include <iostream>
#include <cstdlib>
using namespace std;

double power(double x,int);
double f(double);

int main(void)
{   
    float x ;
    cout << "//求f(-3.2) f(-1.2) f(0) f(2.1)" << endl;
    cin >> x ; 
    /*求f(-3.2)=105.704
    f(-1.2)=-8.584
    f(0)=-1
    f(2.1)=30.983
    */
    cout << "f(x)=3x^3+2x-1" << endl;
    cout << "f(" << x << ")=" << f(x) << endl;
   
    system("pause");
    return 0;
}

double power(double x,int n)
{
    double p=1.0f;
    for(int i=0;i<n;i++)
        p*=x;
    return p;
}

double f(double x)
{
    double sum=0.0f;
    sum=3*power(x,3)+2*x-1;
    return sum; 
}

//牛刀小試 第六章 第十一題 求f(x) 