#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
    string str1;
    str1 = "Times flies";
    string str2 = str1;
    string str3 = "**********";
    cout << str1 << " " << str2 << " " << str3 << endl;

    //system("pause");
    return 0;
}

//第八章 牛刀小試 第二十一題  字串宣告並印出字串
/* output

Times flies Times flies **********

*/