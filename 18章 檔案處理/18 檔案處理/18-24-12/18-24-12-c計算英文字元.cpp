#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    char txt[1000],ch;
    int count=0,char_abc=0,upper=0,lower=0;
    
    ifstream infile("Atlanta.txt",ios::in);

    if(infile.is_open())
    {
        while (infile.get(ch))
            txt[count++]=ch;
        for(int j=0;j<count;j++)
        {
            if(txt[j]>=41 && txt[j]<=90)
                upper+=1;
            if(txt[j]>=97 && txt[j] <=122)
                lower+=1;
        }
            

    }
    else
        cout << "檔案開啟失敗" << endl;

    char_abc = lower + upper;
    cout << "短文字數(包含空白):" << count << endl;
    cout << "小寫數:" << lower << endl;
    cout << "大寫數:" << upper << endl;
    cout << "英文總和為:" << char_abc << endl;

    infile.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第12題-c

計算短文的英文字母數量

--------------output---------------

短文字數(包含空白):494
小寫數:364
大寫數:42
英文總和為:406

*/