#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{

    char txt[4];
    int sum=0;

    ifstream in_file("/Users/zhengyongsheng/c++/18 檔案處理/18-23-8/output/rand.txt",ios::in);
    if(in_file.is_open())
    {
        while(!in_file.eof())
        {
            in_file.getline(txt,4,'\n');
            sum+=atoi(txt);                 //字串轉為整數並相加
        }
        cout << sum/1000;
    }
    else
        cout << "檔案開啟失敗" << endl;

    in_file.close();
    system("pause");
    return 0;
}


/* 牛刀小試 第十八章 第8題-b 

讀取並計算習題8的平均數

--------------output---------------

511

*/