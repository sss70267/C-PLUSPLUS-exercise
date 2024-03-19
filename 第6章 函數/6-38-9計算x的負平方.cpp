#include<iostream>
#include<cstdlib>
using namespace std;

float power(float,int);

int main(void)
{
    double sum=0.0;
    int i,a;
    
    cout << "輸入一個整數計算1/2^n 之方程式" << endl;
    cin >> a;

    for(i=1;i<=a;i++)
        sum+=1.0/(power(2,i));
    cout << "sum=" << sum << endl;

    system("pause");
    return 0;
}

float power(float x,int n)
{
    float p=1.0f;
    int i;
    for(i=0;i<n;i++)
        p*=x;
    return p;
}

//牛刀小試 第六章 第九題 計算 1/2^n 之方程式 