#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

struct today
{
    char days[3];
    char months[3];
    char years[5];

}date;

int main(void)
{
    cout << setfill('0');
    cout << "輸入今日年份:";
    cin.getline(date.years,5);
    cout << "輸入今日月份:";
    cin.getline(date.months,3);
    cout << "輸入今日日期(day):";
    cin.getline(date.days,3);

    cout <<"日期格式   mm/dd/yyyy" << endl;

    cout << setw(2) << date.months << "/";
    cout << setw(2) << date.days << "/";
    cout << setw(4) <<date.years;


    //system("pause");
    return 0;
}

/* 牛刀小試 第十一章 第二題 以結構輸入值存放年月日

輸入今日年份:2024
輸入今日月份:6
輸入今日日期(day):27
日期格式   mm/dd/yyyy
06/27/2024   

*/
