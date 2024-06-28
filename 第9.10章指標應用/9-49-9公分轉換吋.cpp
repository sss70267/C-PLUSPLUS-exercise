#include<iostream>
#include<cstdlib>
using namespace std;
double inch(double *);
int main(void)
{
    double cm,*ptr;
   
    
    cout << "輸入公分數";
    cin >> cm;

    ptr=&cm;
    
    cout << cm << "公分="<<inch(ptr) << "吋";




    //system("pause");
    return 0;

}

double inch(double *cm)
{
    return (*cm*0.394);
}

//第九章 牛刀小試 第九題 使用指標公分轉換為吋
/* output

10公分=3.94吋% 


*/
