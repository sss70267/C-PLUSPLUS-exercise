#include<iostream>
#include<cstdlib>
using namespace std;

void reverse(char []);

int main(void)
{
    char a[15];
    cout << "輸入14個位元組以內的字串:";
    cin.getline(a,15);              //吸收空白字元

    reverse(a);                    //執行函數


    //system("pause");
    return 0;

}

void reverse(char a[])
{
    int i;
    for(i=15-1;i>=0;i--)              //刪掉c型態字串 做結尾的"\0" 
        cout << a[i] << " ";            //逐字打出字串

    return;

}

//第八章 牛刀小試 第十吧題  把輸入的字串顛倒排序
/* output

輸入14個位元組以內的字串:hello wordl
    l d r o w   o l l e h  

*/