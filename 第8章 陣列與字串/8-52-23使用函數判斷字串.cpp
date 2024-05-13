#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
    string str1,str2;

    str1.assign("Practice makes perfect");
    str2.assign("Haste makes waste");
    cout << str1 << endl;
    cout << str2 << endl;

    if(str1.compare(str2) == 0)
        cout << "str1==str2" << endl;
    else
        cout << "str1!=str2" << endl;
    

    //system("pause");
    return 0;
}

//第八章 牛刀小試 第二十三題  利用函示判斷字串長度是否相同
/* output

Practice makes perfect
Haste makes waste
str1!=str2

*/