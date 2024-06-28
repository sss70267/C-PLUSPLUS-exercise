#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    short var;
    short *ptr = &var;

    cout << ptr;

    system("pause");
    return 0;
}


//第九章 牛刀小試 第三題 宣告ㄓptr為var的指標
/* output

0x16f31b23a


*/