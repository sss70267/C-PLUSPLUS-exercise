#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);

    cout << "input quantity:" << argc << endl;

    cout << "a/b餘數為:" << a/b << "餘" << a%b << endl;

    system("pause");
    return 0;
}

// 第七章 牛刀小試 第二十四題 使用命令列引數 計算a/b得餘數