#include<iostream>
#include<cstdlib>
using namespace std;

double trapezoid(int,int,int);
double trapezoid(double,double,double);

int main(void)
{
    int upper1 =1,base1 =2,height1 =2;
    double upper2 = 2.2,base2 = 3.3,height2 = 3.5;
    cout << "int面積為:" << trapezoid(upper1,base1,height1) << endl;
    cout << "double面積為:" << trapezoid(upper2,base2,height2) << endl;

    system("pause");
    return 0;    
}

double trapezoid(int upper,int base,int height)
{
    double area=0;
    area = (upper+base)*height/2;
    return area;

}

double trapezoid(double upper,double base,double height)
{
    
    double area=0;
    area = (upper+base)*height/2;
    return area;

}

// 第七章 牛刀小試 第九題 利用函數多載 計算梯形面積 回傳值為double

