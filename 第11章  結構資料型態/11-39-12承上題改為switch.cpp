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
    }while(i>7|| i<1);

    th = static_cast<weeks>(week+i);
    
    switch(th)
    {
        case 1: cout << a[th-1];
            break;
        case 2: cout << a[th-1];
            break;
        case 3: cout << a[th-1];
            break;
        case 4: cout << a[th-1];
            break;
        case 5: cout << a[th-1];
            break;
        case 6: cout << a[th-1];
            break;
        case 7: cout << a[th-1];

    }
    


    //system("pause");
    return 0;
}


/*  牛刀小試 第十一章 第十題 列舉型態並利用switch 輸入數字顯示對應英文星期

輸入1~7顯示英文星期:9
輸入1~7顯示英文星期:2
Tuesday


*------------------第二解答-------------------*

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

    string a[7]={"Monday","Tuesday","Wednesday",
    "Thursday","Friday","Saturday","Sunday"};

    do
    {
        cout << "輸入1~7顯示英文星期:";
        cin >> i;
    }while(i>7|| i<1);

    week = static_cast<weeks>(i-1);
    
    switch(week)
    {
        case Monday: cout << "今天星期一";
            break;
        case Tuesday: cout << "今天星期二";
            break;
        case Wednesday: cout << "今天星期三";
            break;
        case Thursday: cout << "今天星期四";
            break;
        case Friday: cout << "今天星期五";
            break;
        case Saturday: cout << "今天星期六";
            break;
        case Sunday: cout << "今天星期日";

    }
    


    //system("pause");
    return 0;
}

  牛刀小試 第十一章 第十題 列舉型態並利用switch 輸入數字顯示對應星期

輸入1~7顯示英文星期:2
今天星期二

*/