#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    short a=3;
    int b=20;
    double f=2.365f;

    cout << "sizeof(a)=" << sizeof(a) <<" &a=" << &a << endl;
    cout << "sizeof(b)=" << sizeof(b) <<" &a=" << &b << endl;
    cout << "sizeof(f)=" << sizeof(f) <<" &a=" << &f << endl;

    system("pause");
    return 0;
}

//第九章 牛刀小試 第一題 印出變數所佔的位元組跟位址
/* output

sizeof(a)=2 &a=0x16f5e321a
sizeof(b)=4 &a=0x16f5e3214
sizeof(f)=8 &a=0x16f5e3208


*/