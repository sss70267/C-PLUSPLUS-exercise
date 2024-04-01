#include<iostream>
#include<cstdlib>
using namespace std;

#define max(x,y) (x > y ? x:y)

int main(void)
{
    int x=10,y=21;
    double a=1.5,b=0.9;
    cout << max(x,y) << endl;
    cout << max(a,b) << endl;

    system("pause");
    return 0;

}

// 第七章 牛刀小試 第十七題 用;? 比較大小