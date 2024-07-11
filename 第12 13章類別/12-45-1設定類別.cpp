#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    public:
        int a;
        int b;
        int c;

};

int main(void)
{
    Caaa obj;
    obj.a=1;
    obj.b=3;
    obj.c=obj.a+obj.b;

    cout << "a=" << obj.a << " b=" << obj.b \
        << " c=" << obj.c << endl;


    //system("pause");
    return 0;
}

/* 牛刀小試 第十二章 第一題 設定類別並建立類別變數,設定a,b,c個資料成員 a=1,b=3 c=a+b  

a=1 b=3 c=4

*/
