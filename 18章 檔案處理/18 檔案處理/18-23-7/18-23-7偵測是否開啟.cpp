#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
    char txt[40];    			
    ifstream ifile("/Users/zhengyongsheng/c++/18 檔案處理/18-23-7/donkey.txt",ios::in);//加入檔案位置

    if(ifile.is_open())              //加入判斷式

        while(!ifile.eof())		    // 判別是否讀到檔案的尾端
        {
            ifile.getline(txt,80,'\n'); 
            cout << txt << endl;
        }
    else
        cout << "開啟失敗" << endl;
    ifile.close();			    // 關閉檔案
    //system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第7題   

習7
加入判斷式偵測檔案是否開啟成功

--------------output---------------

我有一隻小毛驢
我從來也不騎

*/