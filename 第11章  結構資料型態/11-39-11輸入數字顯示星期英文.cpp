#include<iostream>
#include<cstdlib>
using namespace std;

enum weeks
{
    Monday,Tuesday,Wednesday,
    Thursday,Friday,Saturday,Sunday
}week;

int main(void)
{
    int i;
    int th;

    string a[7]={"Monday","Tuesday","Wednesday",
    "Thursday","Friday","Saturday","Sunday"};

    do
    {
        cout << "輸入1~7顯示英文星期:";
        cin >> i;
    }while(i>7|| i<1);\
    
    th = static_cast<weeks>(week+i);
    cout << "輸入為:" << i << endl <<"星期:" << a[th-1];


    //system("pause");
    return 0;
}


/*  牛刀小試 第十一章 第十題 列舉型態輸入數字顯示對應英文星期

輸入1~7顯示英文星期:2
輸入為:2
星期:Tuesday

*/