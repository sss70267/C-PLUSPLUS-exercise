#include<iostream>
#include<cstdlib>
using namespace std;

class Calculator
{
    public:
    double a;
    double b;

    void set_values(double c,double d)
    {
        a=c;
        b=d;
        return;
    }

    double add()
    {
        return a+b;
    }

    double sub()
    {
        return a-b;
    }

    double mul()
    {
        return a*b;
    }
    
    double div()
    {
        return a/b;
    }
};

int main(void)
{
    Calculator math;
    math.set_values(9,3.3);

    cout << "a+b加法:" << math.add() << endl; 
    cout << "a+b減法:" << math.sub() << endl; 
    cout << "a+b乘法:" << math.mul() << endl; 
    cout << "a+b除法:" << math.div() << endl; 

    //system("pause");
    return 0;
}

/* 牛刀小試 第十二章 第八題 設定類別資料成員a,b並計算 加減乘除的函數

a+b加法:12.3
a+b減法:5.7
a+b乘法:29.7
a+b除法:2.72727

*/