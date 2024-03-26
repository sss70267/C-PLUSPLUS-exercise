#include<iostream>
#include<cstdlib>
using namespace std;

void sum(int &,int &);

int main(void)
{
    int a=11,b=10;
    cout <<"a="<<a<<"b="<<b<<endl;
    sum(a,b);
    cout <<"a="<<a<<endl;

    system("pause");
    return 0;
}

void sum(int &a, int &b)
{

    a+=b;
    return;

}

// 第七章 牛刀小試 第一題 利用參考計算a+b值 並存入a值中