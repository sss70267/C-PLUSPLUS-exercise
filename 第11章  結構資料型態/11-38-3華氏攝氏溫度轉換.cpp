#include<iostream>
#include<cstdlib>
using namespace std;

struct temperature
{
    float f;
    float c;

}tem;

int main(void)
{
    char select;
    do
    {
        cout << "選擇:(1)攝氏溫度 (2)華氏溫度" << endl;
        cin.get(select);
        cin.get();
    
    } while((select >50)||(select< 49));

    if(select=='1')
    {
        cout <<"輸入攝氏溫度:";
        cin >> tem.f;
        cin.get();
        tem.c = (tem.f*9/5.0)+32;
    }
    else
    {
        cout << "輸入華氏溫度:";
        cin >> tem.c;
        cin.get();
        tem.f = (tem.c*5/9.0)-(160/9.0);
    }
    
    cout << "攝氏溫度:" << tem.f;
    cout << "華氏溫度:" << tem.c;


    //system("pause");
    return 0;
}

/* 牛刀小試 第十一章 第 用結構進行華氏 攝氏溫的轉換

選擇:(1)攝氏溫度 (2)華氏溫度
2
輸入華氏溫度:32
攝氏溫度:0華氏溫度:32%   

*/