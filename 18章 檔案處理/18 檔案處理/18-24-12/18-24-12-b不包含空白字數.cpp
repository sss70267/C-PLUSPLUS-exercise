#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    char txt[1000],ch;
    int count=0,count_blank=0;
    
    ifstream infile("Atlanta.txt",ios::in);

    if(infile.is_open())
    {
        while (infile.get(ch))
            txt[count++]=ch;
        for(int j=0;j<count;j++)
        {
            if(txt[j]==' ')
                count_blank+=1;
        }
            

    }
    else
        cout << "檔案開啟失敗" << endl;

    cout << "短文字數(包含空白):" << count << endl;
    cout << "短文字數(不包含空白):" << count-count_blank << endl;
    infile.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第12題-b

計算短文的字數包含空白

--------------output---------------

短文字數(包含空白):494
短文字數(不包含空白):409

*/