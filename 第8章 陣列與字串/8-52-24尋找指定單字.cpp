#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
    string str1,str2;
    cout << "輸入有the的字串:";
    getline(cin,str1);              //輸入字串
    str2.assign("the");             //被尋找的字串
    
    
    cout << "the index:" << str1.find(str2) << endl;        //從str1尋找str2字串位置

    //system("pause");
    return 0;

}

//第八章 牛刀小試 第二十四題  尋找指定單字的位置
/* output

P輸入有the的字串:i live in a city.the city is very big.
the index:17

*/