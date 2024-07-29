#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    private:
        int m,n;
    public:
        Caaa(int m1,int n1):m(m1),n(n1)
        {}
        Caaa(const Caaa &win)
        {
            cout << "拷貝元被呼叫了" << endl;
            m=win.m;
            n=win.n;
        }
        void show()
        {
            cout << "m=" << m << ", n=" << n << endl;
        }
};

int main(void)
{
    Caaa obj1(10,20);
    Caaa obj2=obj1;

    obj1.show();
    obj2.show();

    //system("pause");
    return 0;
}

/* 牛刀小試 第十四章 第八題 當拷貝元被呼叫時印出 拷貝元被呼叫了

拷貝元被呼叫了
m=10, n=20
m=10, n=20
*/
