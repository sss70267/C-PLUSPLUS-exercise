#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{

    string str1,str2;
    int str1_len,str2_len;      //字串長度變數

    //手動輸入字串
    cout << "輸入字串1:";
    getline(cin,str1);
    cout << "輸入字串2:";
    getline(cin,str2);

    // 計算字串長度
    str1_len = str1.length();
    str2_len = str2.length();
    

    cout << "字串1內容:" << str1 << " 字串長度為:" << str1_len << endl;
    cout << "字串2內容:" << str2 << " 字串長度為:" << str2_len << endl;

    cout << "判斷字串是否相同:";
    if(str1_len == str2_len)
        cout << "相同" << endl;
    else
        cout << "不同" << endl;
    

    //system("pause");
    return 0;

}

//第八章 牛刀小試 第二十二題  輸入字串計算長度,並計算是否一樣長
/* output

輸入字串1:i love python 
輸入字串2:l'm learning c++  
字串1內容:i love python 字串長度為:13
字串2內容:l'm learning c++ 字串長度為:16
判斷字串是否相同:不同

*/