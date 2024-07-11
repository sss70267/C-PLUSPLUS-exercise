#include<iostream>
#include<cstdlib>
using namespace std;

class CTemp
{
    public:
    double drgee;

    void CtoF()
    {
        cout << "華氏溫度為:" << (drgee*9.0/5)+32;

    }

};

int main(void)
{
    CTemp FC;
    cout << "輸入攝氏溫度:";
    cin >> FC.drgee;
    FC.CtoF();

    //system("pause");
    return 0;
}


/* 牛刀小試 第十二章 第六題 攝氏溫度轉華氏溫度

輸入攝氏溫度:37.2
華氏溫度為:98.96

*/