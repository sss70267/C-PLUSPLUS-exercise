#include<iostream>
#include<cstdlib>
using namespace std;

bool bool_is_prime(int);

int main(void)
{
    int n;
    cout << "輸入一個整數:" << endl;
    cin >> n;

    try
    {
        if(n<0)
            throw "argument out of bound";
    }
    catch(const char *str)
    {
        cout << "捕捉到" << str << "例外" << endl;
    }


    system("pause");
    return 0;
}

bool bool_is_prime(int n)
{
    if(n/2!=0 && n/3!=0 && n>1)
        return true;
    else
        return false;
}

/* 牛刀小試 第十九章 第4題   

習4
判斷是否為質數並拋出例外

--------------output---------------

輸入一個整數:
-1
捕捉到argument out of bound例外

*/