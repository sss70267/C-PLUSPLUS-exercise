#include<iostream>
#include<cstdlib>
using namespace std;

double centigrade(double);

int main(void)
{
    float a;
    double f;

    cout << "輸入華氏溫度:" << endl;
    cin >> a ;
    f = centigrade(a);
    cout << "攝氏溫度為:" << f << endl;
    //system("pause");  部分編譯器才需要
    return 0;

}

double centigrade(double f)
{
    float a=5,b=9;
    if(f==0)
        return 1;
    else
        return double((f-32)*(a/b));
        
}

//牛刀小試 第六章 第十一題 華氏溫度轉攝氏溫度
