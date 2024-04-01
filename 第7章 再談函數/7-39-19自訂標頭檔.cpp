#include<iostream>
#include<cstdlib>
using namespace std;

#include "myhfile.h"

int main(void)
{
    int x,y;
    cout << "輸入x值:" << endl;
    cin >> x;
    cout << "輸入y值:" << endl;
    cin >> y;

    cout << "sum(" << x << "," << y << ")=" << sum(x,y) << endl;
    cout << "max("<< x << "," << y << ")=" << max(x,y) << endl;

    system("pause");
    return 0;
}

// 第七章 牛刀小試 第十九題 把第 16 17題巨集寫成myhfile.h檔 利用#include帶入程式中 輸入x,y值計算這兩個巨集