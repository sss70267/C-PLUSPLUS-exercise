#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{

    char word[26];
    string str_word;
    cout << "印出英文單字" << endl;

    for(int i=0;i<26;i++)
    {
        word[i]=char(i+65);
        str_word+=word[i];
    }
    cout << str_word << endl;


    //system("pause");
    return 0;

}

//第八章 牛刀小試 第十六題  將十五題以字串輸出
/* output

印出英文單字
ABCDEFGHIJKLMNOPQRSTUVWXYZ 

*/