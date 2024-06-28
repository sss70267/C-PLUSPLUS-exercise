#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

char *set_str(char *);

int main(void)
{
    char *str1,*str2,*str3;
    str1=set_str("i love python");
    str2=set_str("i love c++");
    str3=set_str(" ");
    

    
    cout << "字串交換前:" << endl;
    cout << "str1= " << str1 << endl;
    cout << "str2= " << str2 << endl;

    cout << "字串交換後:" << endl;
    str3=str1;
    str1=str2;
    str2=str3;
    cout << "str1= " << str1 << endl;
    cout << "str2= " << str2 << endl;

    delete [] str1;
    delete [] str2;
    delete [] str3;

    //system("pause");
    return 0;
}

char *set_str(char *text)
{
    char *ptr;
    ptr=new char[strlen(text)+1];
    strcpy(ptr,text);
    return ptr;
}


//第十章 牛刀小試 第五題 字串str1 與 str2 內容互換
/* output

字串交換前:
str1= i love python
str2= i love c++
字串交換後:
str1= i love c++
str2= i love python
                                                                                                   
*/