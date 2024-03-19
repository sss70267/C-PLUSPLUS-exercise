#include<iostream>
#include<cstdlib>
using namespace std;
void proverd(int,string);

int main(void)
{
    int a=3;
    string str1="live and learn";   //要印的字串
    proverd(a,str1);
    system("pause");
    return 0;
}

void proverd(int n,string c)
{
    int i;
    for(i=1;i<=n;i++)              //重複執行n次
        cout << c <<endl;
    return;
}

//牛刀小試 第六章 第二題 印出a行字串