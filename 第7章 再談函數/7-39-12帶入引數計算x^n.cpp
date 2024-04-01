#include<iostream>
#include<cstdlib>
using namespace std;

int power(int x=1,int n=1);

int main(void)
{
    cout << "power()=" << power() << endl;
    cout << "power(5)=" << power(5) << endl;
    cout << "power(3,2)=" << power(3,2) << endl;

    system("pause");
    return 0;
}

int power(int x, int n)
{
    int sum = 1;

    for(int i=0;i<n;i++)
    sum*=x;
    return sum;
    

}
// 第七章 牛刀小試 第十二題 計算x^n 預設x=1 n=1 計算power() power(5) power(3,2)的值