#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    char txt[1000],ch;
    int count=0,char_is=0;
    
    ifstream infile("Atlanta.txt",ios::in);

    if(infile.is_open())
    {
        while (infile.get(ch))
            txt[count++]=ch;
        for(int j=0;j<count;j++)
            if(txt[j-1]==' ')
                    if(txt[j]=='i')
                        if(txt[j+1]=='s')
                            char_is+=1;
    }
    else
        cout << "檔案開啟失敗" << endl;

    cout << "短文字數(包含空白):" << count << endl;
    cout << "is數量:" << char_is << endl;

    infile.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第12題-d

計算短文 is 出現的數量

--------------output---------------

短文字數(包含空白):494
is數量:3

*/