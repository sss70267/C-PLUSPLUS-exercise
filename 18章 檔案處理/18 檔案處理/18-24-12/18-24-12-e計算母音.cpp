#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{

    char ch,txt[1000];
    int char_a=0,char_i=0,char_u=0,char_e=0,char_o=0,n=0;

    ifstream in_file("Atlanta.txt",ios::out);
    if(in_file.is_open())
    {
        while(in_file.get(ch))
            txt[n++]=ch;
        for(int j=0;j<n;j++)
        {
            if(txt[j]=='a'||txt[j]=='A')
                char_a+=1;
            else if(txt[j]=='i'||txt[j]=='I')
                char_i+=1;
            else if(txt[j]=='u'||txt[j]=='J')
                char_u+=1;
            else if(txt[j]=='e'||txt[j]=='E')
                char_e+=1;
            else if(txt[j]=='o'||txt[j]=='O')
                char_o+=1;
        }
        cout << "a數量為:" << char_a << endl;
        cout << "i數量為:" << char_i << endl;
        cout << "u數量為:" << char_u << endl;
        cout << "e數量為:" << char_e << endl;
        cout << "o數量為:" << char_o << endl;
    }
    else
        cout << "檔案未被開啟" << endl;

    in_file.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第12題-e

計算短文的母音數量

--------------output---------------

a數量為:39
i數量為:39
u數量為:9
e數量為:44
o數量為:27

*/