#include<iostream>
#include<cstdlib>
using namespace std;
double gallon(double *);
int main(void)
{
    double liter,*ptr;

    cout << "輸入公升數:";
    cin >> liter;

    ptr = &liter;

    cout << liter << "公升=" << gallon(ptr) << "加侖" << endl;



    //system("puase");
    return 0;
}

double gallon(double *liter)
{

    return(*liter*0.264);

}

//第九章 牛刀小試 第十題 使用指標公升轉換為加侖
/* output

10公升=2.64加侖


*/