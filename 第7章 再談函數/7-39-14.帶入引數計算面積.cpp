#include<iostream>
#include<cstdlib>
using namespace std;

double triangle(int base=2,int height=1);

int main(void)
{

    cout << "triangle(10)area=" << triangle(10)<< endl;
    cout << "triangle(12,3)area=" << triangle(12,3) << endl;

    system("pause");
    return 0;

}

double triangle(int base,int height)
{

    double area=0;
    area = base*height/2;
    return area;


}

// 第七章 牛刀小試 第十四題 預設triangle(base=2,height=1) 計算triangle(10) triangle(12,3)的面積