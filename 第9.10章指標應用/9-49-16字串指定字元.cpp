#include<iostream>
#include<cstdlib>
using namespace std;

void display(char *,int);

int main(void)
{
    char str[30];
    char *ptr;
    int start;
    cout << "輸入30個字內字串:" << endl;
    cin.getline(str,30);
    ptr=str;


    cout << "開始字元位置;";
    cin >> start;
    cout << "從第" << start << "個字元開始";
    

    display(ptr,start);


    //system("pause");
    return 0;

}

void display(char *str,int n)
{
    cout << str+n;
    return;
}

//第九章 牛刀小試 第十六題 使用指標 輸入字串指定索引開始輸出螢幕
/* output

輸入30個字內字串:
i lvoe python and c++.
開始字元位置;6
從第6個字元開始 python and c++.

*/