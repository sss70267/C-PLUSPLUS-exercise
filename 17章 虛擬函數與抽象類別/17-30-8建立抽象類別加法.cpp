#include<iostream>
#include<cstdlib>
using namespace std;

class CMath                                                         //抽象類別
{
    public:
        void show()
        {
            cout << "ans= " << compute() << endl;   
        }

        virtual int compute()=0;                                    //泛虛擬函數 須明確定義

};

class Cadd : public CMath
{
    public:
        int num1,num2;
        
        Cadd(int m,int n):num1(m),num2(n)
        {
        }

        virtual int compute()
        {
            return num1+num2;
        }
        void show()                                                 //改寫show函數
        {
            cout << "add(" << num1 << "," << num2 << ") = " << compute() << endl;
        }

};

int main(void)
{
    Cadd a1(10,2);
    a1.show();

    system("pause");
    return 0;
}

/* 牛刀小試 第十七章 第8.9題   

習題8
定義虛擬函數compute()使 num1 num2 相加
習題9
改寫show 使add(num1,num2)=ans 印出

--------------output---------------

add(10,2) = 12

*/