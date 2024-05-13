#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{   
    int month;
    string season[]={"winter","winter","spring","spring","spring","summer","summer","summer",
                    "autumn","autumn","autumn","winter"};
    
    cout << "輸入當月月份整數:";
    cin >> month;
    cout << "月";
    cout << "目前季節為:" << season[month-1] << endl;

    //system("pause");
    return 0;
}

//第八章 牛刀小試 第二十八題    宣告一陣列輸入月份顯示季節 *可用switch
/* output

輸入當月月份整數:12
月目前季節為:winter

*/