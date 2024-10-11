#include<iostream>
#include<cstdlib>
using namespace std;

namespace name1
{
    int var=5;
}

namespace name2
{
    int var=10;
}

int main(void)
{

    cout << "name1 var value:" << name1::var << endl;
    cout << "name2 var value:" << name2::var << endl;

    system("pause");
    return 0;
}

/* 牛刀小試 第二十章 第2題   

習2

在main內可以印出 namespace 中的var值

--------------output---------------

name1 var value:5
name2 var value:10

*/

