#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

void repeat(int,string);

int main(void)
{
    int add=5;
    string str1 = "i love python";
    repeat(add,str1);
    repeat(5,"hello,c++");

    //system("pause");
    return 0;
}


void repeat(int a,string str1)
{
    int i;
    for(i=0;i<a;i++)
        cout << str1 << endl;
    
    return;
}

//第八章 牛刀小試 第二十題  重複打印字串
/* output

i love python
i love python
i love python
i love python
i love python
hello,c++
hello,c++
hello,c++
hello,c++
hello,c++

*/