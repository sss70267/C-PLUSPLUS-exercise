#include<iostream>
#include<cstdlib>
using namespace std;

double avg(int,int,int);
void show(int,int,int);

int main(void)
{
    avg(3,2,3);
    system("pause");
    return 0;
}

double avg(int a,int b,int c)
{
    cout << "平均數為:" << (a+b+c)/3.0f << endl;
    show(a,b,c);
    return 1.0f;

}

void show(int a,int b,int c)
{
    cout << "a="<< a << " b=" << b << " c=" << c << endl;
    return;
}

//牛刀小試 第六章 第二十二題 計算ave(a,b,c) 的平均,並在函數內呼叫show印出3個數的值 