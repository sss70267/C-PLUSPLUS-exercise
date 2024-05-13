#include<iostream>
#include<cstdlib>
using namespace std;

double age(double []);
#define max 5

int main(void)
{

    double number[max]={};              //陣列最大限制為5
    double score=0;

    cout << "輸入5個數字:" << endl;
    score = age(number)/5;              //計算平均數
    cout << "平均數為:" << score;


    //system("pause");
    return 0;   
}


double age(double a[])
{
    double total=0;
    for(int i=0;i<5;i++)
    {
        cin >> a[i];
        total+=a[i];
    }
    return total;

}

//第八章 牛刀小試 第三題  計算陣列平均數
/* output
輸入5個數字:
1
2
3
4
5
平均數為:3% 
*/