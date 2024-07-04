#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

enum months
{
    January=1,February,March,April,May,June,
    July,August,September,October,November,December

}month;

int main(void)
{
    int n;
    string en_month[12]={
        "January","February","March","April","May","June",
        "July","August","September","October","November","December"};
    do
    {
        cout << "輸入1~12顯示月份:";
        cin >> n;
        cin.get();
    }while(n>12||n<1);
    month=static_cast<months>(n);
    cout << "輸入數字為:"<< n << "="<< en_month[month-1] << endl;


    //system("pause");
    return 0;
    
}


/*  牛刀小試 第十一章 第九題 以列舉型態輸入1~12 並顯示英文月份

輸入1~12顯示月份:12
輸入數字為:12=December
*/