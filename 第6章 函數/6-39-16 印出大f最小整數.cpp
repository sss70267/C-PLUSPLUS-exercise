#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    auto float f;
    auto int a;
    cout << "輸入一個浮點數" << endl;
    cin >> f;
    a = f;
    cout << a+1;

    system("pause");
    return 0;
}

//牛刀小試 第六章 第十六題 印出大於f的最小整數