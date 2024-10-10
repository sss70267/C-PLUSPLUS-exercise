#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    int n,count_a=0,count_e=0,count_i=0,count_o=0,count_u=0;
    char txt[1000],ch;

    ifstream read_file("/Users/zhengyongsheng/c++/18 檔案處理/18-23-9/a.txt",ios::in);  //讀取文件

    if(read_file.is_open())
    {   
        while(read_file.get(ch))       //取的字元
            txt[n++]=ch;                //每個拷貝字元
        for(int j=0;j<n;j++)            //a i u e o單字計算
        {
            if(txt[j]=='a')
                count_a+=1;
            else if(txt[j]=='e')
                count_e+=1;
            else if(txt[j]=='i')
                count_i+=1;
            else if(txt[j]=='o')
                count_o+=1;
            else if(txt[j]=='u')
                count_u+=1;
        }
        cout << "出現a,e,i,o,u字母統計如下:" << endl;
        cout << "a=" << count_a << endl;
        cout << "e=" << count_e << endl;
        cout << "i=" << count_i << endl;
        cout << "o=" << count_o << endl;
        cout << "u=" << count_u << endl;
        cout << "字串字數:" << n << endl;
    }
    else 
        cout << "檔案開啟失敗" << endl;
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第9題

計算文字的a i u e o 出現次數

--------------output---------------

出現a,e,i,o,u字母統計如下:
a=11
e=14
i=7
o=11
u=3
字串字數:161

*/