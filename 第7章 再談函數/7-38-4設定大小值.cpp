#include<iostream>
#include<cstdlib>
using namespace std;

int setvalue(int &,int &);

int main(void)
{
    int a,b;
    cout << "輸入a值:" << endl;
    cin >> a;
    cout << "輸入b值:" << endl;
    cin >> b;
    setvalue(a,b);
    cout << "a=" << a << "b=" << b <<endl;

    system("pause");
    return 0;
}

int setvalue(int &a,int &b)
{

    if(a<b)
        {
            a=10;
            b=100;
        }
    else
        {
            a=100;
            b=10;
        }
    return a;
}

//牛刀小試 第七章 第四題 輸入a、b值   設最大值為100 最小為10