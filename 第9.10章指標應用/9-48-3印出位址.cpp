#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    float f;
    int sum=100;

    cout << "&f=" << &f << endl;
    cout << "&sum=" << &sum << endl;

    system("pause");
    return 0;
}

//第九章 牛刀小試 第二題 印出變數位址
/* output

&f=0x16b143238
&sum=0x16b143234


*/
