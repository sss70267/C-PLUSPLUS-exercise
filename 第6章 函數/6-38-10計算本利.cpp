#include<iostream>
#include<cstdlib>
using namespace std;

float MIT(float,int);

int main(void)
{
    double p,r=0.02f,t;     //本金
    int n;      //存款期數

    cout << "輸入本金：" << endl;
    cin >> p;
    cout << "輸入期數:" << endl;
    cin >> n;

    t = p*MIT(1+r,n);
    cout << "本利:" << t;
    system("pause");
    return 0;

}

float MIT(float a,int b)
{
    if(b==0)
        return 1.0f;
    else
        return a*MIT(a,b-1);

}

//牛刀小試 第六章 第十題 計算本利(principal and interest)