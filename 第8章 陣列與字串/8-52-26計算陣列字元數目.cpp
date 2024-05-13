#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
    int i;
    string str1,str2,str3,str4,str5;
    string str_array[]={""};
    
    //鍵盤輸入字串
    cout << "輸入字串1:";
    getline(cin,str1);
    
    cout << "輸入字串2:";
    getline(cin,str2);

    cout << "輸入字串3:";
    getline(cin,str3);

    cout << "輸入字串4:";
    getline(cin,str4);

    cout << "輸入字串5:";
    getline(cin,str5);

    // 合併字串
    str_array->append(str1);
    str_array->append(str2);
    str_array->append(str3);
    str_array->append(str4);
    str_array->append(str5);
    //打印陣列
    for(i=0;i<5;i++)
        cout << str_array[i];
    
    cout << endl;


    //system("pause");
    return 0;
}


//第八章 牛刀小試 第二十六題    輸入5個字串合成個一個陣列
/* output

輸入字串1:i 
輸入字串2:love 
輸入字串3:py
輸入字串4:th
輸入字串5:on
i love python

*/