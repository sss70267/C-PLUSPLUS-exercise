#include<iostream>
#include<cstdlib>
using namespace std;


int max(int a,int b=10);

int main(void)
{
    int a;
    cout << "輸入a值:" << endl;
    cin >> a;

    cout << max(a);

    system("pause");
    return 0;

}

int max(int a,int b)
{

    if(a<b)
        {
            cout << "b值為:";
            return b;
        }
    else
        {
            cout << "a值為:";
            return a;
        }
}

// 第七章 牛刀小試  第十一題 比較max(a,b=10) 預設b為10 輸入a回傳度值
