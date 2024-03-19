#include<iostream>
#include<cstdlib>
using namespace std;
int cub(int);

int main(void)
{   
    cub(10);      //要計算的平方數字
    system("pause");
    return 0;
}

int cub(int n)
{
    int s;
    s = n*n*n;    // 數字的三次方
    cout << s << endl;
    return s;
}
//牛刀小試 第六章 第四題 計算整數的3次方