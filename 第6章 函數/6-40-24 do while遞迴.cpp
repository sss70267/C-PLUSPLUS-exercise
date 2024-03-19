#include<iostream>
#include<cstdlib>
using namespace std;

int fact(int);

int main(void)
{
    int n,sum=0;
    do
    {
        cout << "輸入一個數字" << endl;
        cin >> n;
        sum+=fact(n);
    }while(n>=0);                  //大於0繼續計算

    cout << sum-1 << endl;
    
    system("pause");
    return 0;
}

int fact(int n)
{
    if(n>1)
        return n*fact(n-1);
    else
        return 1;
}

//牛刀小試 第六章 第二十四題 用遞迴計算 n!+n!的總和