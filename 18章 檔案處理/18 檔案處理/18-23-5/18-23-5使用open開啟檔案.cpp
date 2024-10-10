#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    ofstream ofile;
    ofile.open("donky.txt",ios::out);

    if(ofile.is_open())
    {
        ofile << "我有一隻小毛驢" << endl;
        ofile << "我從來也不騎" << endl;
        cout << "已經字串寫入檔案" << endl;
    }
    else
        cout << "檔案開啟失敗" << endl;

    ofile.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第5題   

習5
利用open() 開啟檔案

--------------output---------------

已經字串寫入檔案

*/