#include<iostream>
#include<cstdlib>
using namespace std;

int fact(int);
double power(double,int);


int main(void)
{
    double sum=0.0f;
    int l=0;
    for(l=1;l<=10;l++)
        sum+=power(0.1,l)/fact(l);       //預設x為0.1
    cout << "sum=" << sum << endl;

    system("pause");
    return 0;



}


int fact(int a)
{
    if(a>0)
        return (a*fact(a-1));
    else
        return 1;
}

double power(double x,int n)
{
    float p=1.0f;
    for(int i=0;i<n;i++)
        p*=x;
    return p;
}
//牛刀小試 第六章 第二十題 計算 X^0/0! ~ X^10/10! 的總和