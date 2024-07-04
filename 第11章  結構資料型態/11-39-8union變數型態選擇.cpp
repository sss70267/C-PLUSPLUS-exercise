#include<iostream>
#include<cstdlib>
using namespace std;

union square
{
    int int_value;
    float f_value;

}a;

int main(void)
{
    int flag;
    do
    {
        cout << "選擇(1)整數(2)浮點數型態:";
        cin >> flag;
        cin.get();
    } while (flag>2||flag<1);

    if(flag==1)
    {
        cout << "(整數)輸入整數:";
        cin >> a.int_value;
        a.int_value*=a.int_value;
        cout << "整數型態平方:" << a.int_value;
    }
    else
    {
        cout << "(浮點數)輸入整數:";
        cin >> a.f_value;
        a.f_value*=a.f_value;
        cout << "浮點數型態平方" << a.f_value;
        
    }
    

    //system("pause");
    return 0;
}


/*  牛刀小試 第十一章 第八題 以共同空間選擇型態計算數值平方

選擇(1)整數(2)浮點數型態:1
(整數)輸入整數:9
整數型態平方:81
*/