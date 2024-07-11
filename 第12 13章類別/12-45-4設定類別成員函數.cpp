#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class CWin
{
    public:
    char id;
    int width;
    int height;
    string title;

    void set_title()
    {
        getline(cin,title);

    }

    void display()
    {
        cout << "title:" << title << endl;

    }

};

int main(void)
{

    CWin win1;
    win1.id='a';
    win1.width=50;
    win1.height=40;
    cout << "輸入title:";
    win1.set_title();
    win1.display();

    system("pause");
    return 0;
}

/* 牛刀小試 第十二章 第四題 設定類別多加兩個set_title,display函數

輸入title:我愛 python c++
title:我愛 python c++

*/