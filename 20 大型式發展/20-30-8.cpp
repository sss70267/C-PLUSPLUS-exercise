#include<iostream>
#include<cstdlib>
#define pi 3.1415962
using namespace std;
double circle_area(int);

int main(void)
{
    #ifndef pi
        pi=3.1415962;
    #else 
        cout << "pi已經被定義" << endl;
    #endif

    int redius;
    cout << "輸入半徑:" << endl;
    cin >> redius;
    
    cout << "圓形面積為:" << circle_area(redius) << endl;

    system("pause");
    return 0;
}

double circle_area(int d)
{
    return d*d*pi;
}

/* 牛刀小試 第二十章 第8題   

習8
使用前置指令定義pi 並利用#ifndef #else #endif 判斷是否定義

--------------output---------------

pi已經被定義
輸入半徑:
5
圓形面積為:78.5399

*/