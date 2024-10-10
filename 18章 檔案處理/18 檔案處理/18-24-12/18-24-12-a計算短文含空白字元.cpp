#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    char txt[1000],ch;
    int count=0;
    
    ifstream infile("Atlanta.txt",ios::in);

    if(infile.is_open())
    {
        while (infile.get(ch))
            txt[count++]=ch;
    }
    cout << "短文字數(包含空白):" << count << endl;
    infile.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第12題-a

計算短文的字數包含空白

--------------output---------------

短文字數(包含空白):494

*/