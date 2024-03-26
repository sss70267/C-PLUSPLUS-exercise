#include<iostream>
#include<cstdlib>
using namespace std;

int min(int,int);
double min(double,double);

int main(void)
{
    int a=10,b=20;
    double c=3.3,d=4.5;
    cout << "int函數" << min(a,b) << endl;
    cout << "double函數" << min(c,d) << endl;
    system("pause");
    return 0;

}

int min(int i,int j)
{
    if(i<j)
        return i;
    else   
        return j;

}

double min(double i,double j)
{
    if(i<j)
        return i;
    else   
        return j;

}

// 第七章 牛刀小試 第七題 利用函數多載運行min()印出最小值