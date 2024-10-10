#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    int i=1;

    ofstream out_file("rand.txt",ios::out);
    if(out_file.is_open())
    {    
        while(i<=1000)
        {
            out_file << rand()%(1000-1+1) + 1;
            out_file << '\n';
            i++;
        }
        cout << "檔案寫入成功" << endl;
    }
    else
        cout << "檔案開啟失敗" << endl;

    out_file.close();

    //system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第8題-a

隨機產生1~1000的整數並輸出

--------------output---------------

檔案寫入成功

*/