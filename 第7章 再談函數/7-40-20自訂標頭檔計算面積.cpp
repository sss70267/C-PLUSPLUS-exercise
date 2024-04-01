#include<iostream>
#include<cstdlib>
using namespace std;

#include "head_math.h"

int main(void)
{

    int base1=10,height1=12;
    cout << "(1)平行四邊形面積para(" << base1 << "," << height1 << ")=" <<para(base1,height1) << endl;

    double base2,upper2,height2;
    cout << "輸入base值:" << endl;
    cin >> base2;
    cout <<"輸入upper2值:" << endl;
    cin >> upper2;
    cout << "輸入height2值:" << endl;
    cin >> height2;
    cout <<"(2)梯形面積traoezoid(" << base2 << "," << upper2 \
    << "," << height2 << ")=" << trapezoid(base2,upper2,height2) << endl;

    double r;
    cout << "輸入半徑r的值:";
    cin >> r;
    cout << "(3)圓周長periphery(" << r << ")=" << periphery(r) << endl;

    cout << "(4)球體面積volumn(" << r << ")=" << volumn(r) << endl;


    system("pause");
    return 0;
}

//// 第七章 牛刀小試 第二十題 定義head_math.h檔 分別計算平行四邊形、梯形、圓周長、球體的面積