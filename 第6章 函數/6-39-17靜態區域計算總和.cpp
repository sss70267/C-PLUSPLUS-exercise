#include<iostream>
#include<cstdlib>
using namespace std;

int total(int);

int main(void)
{
    int n;
    cout << "輸入一個數字:" << endl;
    cin >> n;
    total(n);

    system("pause");
    return 0;     

}

int total(int n)
{
    int i;
    static int sum=0;
    for(i=1;i<=n;i++)
        sum+=i;
    cout << "1+2+3....+" << n << "=" << sum <<endl;

    return n;

}

//牛刀小試 第六章 第十七題 計算0~n的總和 