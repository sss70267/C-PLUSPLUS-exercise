#include<iostream>
#include<cstdlib>
using namespace std;

double km(register double);

int main(void)
{
    int i;
    for(i=60;i<=100;i+=10)
        cout << i <<"公里=" << km(i) << "英哩" << endl;

    system("pause");
    return 0;


}

double km(register double mls)
{
    return 1.6*mls;
}

//牛刀小試 第六章 第十九題 利用暫存器寫轉換英哩函式