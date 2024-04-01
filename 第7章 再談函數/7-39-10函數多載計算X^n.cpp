#include<iostream>
#include<cstdlib>
using namespace std;

double power(int,int);
double power(double,double);

int main(void)
{   
    int a=2,b=3;
    double i=2.2,j=3.0;


    cout << "int型態x^n:" << power(a,b) << endl;
    cout << "double型態X^n:" <<power(i,j) << endl ;

    system("pause");
    return 0;
}

double power(int x,int n)
{
    int sum=1;
    for(int i=0;i<n;i++)
        sum*=x;
    return sum;

}

double power(double x,double n)
{
    double sum=1;
    for(int i=0;i<n;i++)
        sum*=x;
    return sum;
}

// 第七章 牛刀小試 第十題 利用函數多載 計算x^n次方 回傳double值