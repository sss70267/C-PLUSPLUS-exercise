#include<iostream>
#include<cstdlib>
using namespace std;

int add(int);

int main(void)
{
    int n;
    cout << "輸入一個數:1~n總和" << endl;
    cin >> n;
    cout << "1~"<< n<< "的總和為:" << add(n) << endl;
    system("pause");
    return 0;
}

int add(int n)
{
    if(n>1)
        return n+add(n-1);
    else
        return 1;

}

//牛刀小試 第六章 第二十三題 用遞迴計算1~n的總和