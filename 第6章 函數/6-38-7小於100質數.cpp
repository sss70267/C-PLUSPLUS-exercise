#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

bool prime(int);

int main(void)
{
    int i;
    for(i=2;i<=100;i++)
        if(prime(i))
           cout << i <<" ";
        cout << endl;
    system("pause");
    return 0;
}

bool prime(int a)
{
    int i;
    for(i=2;i<sqrt((double)a+1);i++)
        if(a%i==0)
            return false;
    return true;
}

//牛刀小試 第六章 第七題 小於100質數判斷