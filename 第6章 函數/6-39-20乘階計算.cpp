#include<iostream>
#include<cstdlib>
using namespace std;

int fact(int);


int main(void)
{
    int i;
    double sum=0.0f,k=1.0f;
    for(i=1;i<=10;i++)
        sum+=k/fact(i);
    cout << sum <<endl;


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

//牛刀小試 第六章 第二十題 計算 1/1!~1/10! 的總和