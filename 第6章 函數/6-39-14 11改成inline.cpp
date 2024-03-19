#include<iostream>
#include<cstdlib>
using namespace std;

inline double centigrade(double f)
{
    float a=5,b=9;
    if(f==30)
        return 1;
    else
        return double((f-32)*(a/b));
        
}


int main(void)
{
    float a=-40;

    for(a=-40;a<=20;a+=10)
        {
            cout << "華氏溫度" << a << "攝氏為:" << centigrade(a) << endl;
        }
    //system("pause");  部分編譯器才需要
    return 0;

}


//牛刀小試 第六章 第十四題 用inilne計算華氏溫度轉攝氏溫度
