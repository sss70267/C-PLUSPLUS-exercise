#include<iostream>
#include<cstdlib>
using namespace std;

int fact(int);

int main(void)
{
    int n;
    cout << "輸入整數:" << endl;
    cin >> n;
    cout << "fact(" << n << ")=" << fact(n) << endl;

    system("puase");
    return 0;
}

int fact(int n)
{
    double prdf=1.0;
    try
    {
        if(n<0)
            throw "數值需要大於1";
        for(int i=1;i<=n;i++)
        {    
            if(n==0)
                return 1;
            else if(prdf>1000)
                throw "數字過大";
            else 
                prdf=prdf*i;
        }
    }
    catch(const char *str)
    {
        cout << "補捉到"<< str <<"例外" << endl;
    }
    return prdf;

}

/* 牛刀小試 第十九章 第5題   

習5
計算n的乘階 並拋出例外

--------------output---------------

輸入整數:
7
fact(7)=5040

*/