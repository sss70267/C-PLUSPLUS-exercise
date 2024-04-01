#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
    int integer=atoi(argv[1]);
    
    cout << "input quantity:" << argc << endl;

    if(integer%2==0)
        cout << "偶數" << endl;
    else
        cout << "奇數" << endl;

    system("pause");
    return 0;

}

// 第七章 牛刀小試 第二十三題 使用命令列引數 判斷奇數 偶數