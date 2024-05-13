#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
    string month[] = {"January","February","March","April",
                    "May","June","July","August","September",
                    "October","Nobember","December"};               //月份陣列

    int month_int;

    cout << "輸入1~12月整數:";
    cin >> month_int;
    cout << month[month_int-1] << endl;

    

    //system("pause");
    return 0;

}

//第八章 牛刀小試 第二十五題    輸入1~12,轉換成對應的月份英文
/* output

輸入1~12月整數:5
May

*/