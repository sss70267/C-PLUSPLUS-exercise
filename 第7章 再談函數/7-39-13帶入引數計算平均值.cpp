#include<iostream>
#include<cstdlib>
using namespace std;

double avg(int,int b=5,int c=7);

int main(void)
{
    cout << "avg(13)平均值為:" << avg(13) << endl;
    cout << "avg(9,16)平均值為:" << avg(9,16) << endl;
    cout << "avg(8,17,3)平均值為:" << avg(8,17,3) << endl;

    system("pause");
    return 0;    
}

double avg(int a,int b,int c)
{
    double avg1=0;
    avg1 = double(a+b+c)/3;
    return avg1;

}

// 第七章 牛刀小試 第十三題 預設avg(a,b,c)b=5,c=7 計算avg(13) avg(9,16) avg(8,17,3)的平均值