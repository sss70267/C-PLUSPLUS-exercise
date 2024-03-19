#include<iostream>
#include<cstdlib>
using namespace std;
void proverd(int);

int main(void)
{
    int a;   
    proverd(10);      //輸入打印的參數
    system("pause");
    return 0;
}

void proverd(int n)
{
    int i;
    for(i=1;i<=n;i++)              //重複執行n次
        cout << "hello c++" <<endl;
    return;
}

//牛刀小試 第六章 第三題 重複print