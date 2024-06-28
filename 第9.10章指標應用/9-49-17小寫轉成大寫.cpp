#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>

using namespace std;

void capitalize_en(char *);

int main(void)
{
    char lower[80];

    cout << "輸入英文小寫字串:" << endl;
    cin.getline(lower,80);


    capitalize_en(lower);
    cout << lower;



    //system("pause");
    return 0;
}

void capitalize_en(char *str1)
{
    int j;
   for(j=0;j<strlen(str1);j++)
      if (*(str1+j)=='\0')
         break;
      else if((*(str1+j)>=97) && (*(str1+j)<=122)) //ASCII編碼
         *(str1+j)-=32;
   return;
}

//第九章 牛刀小試 第十七題 使用指標 小寫變大寫
/* output

輸入英文小寫字串:
i love python and c++.
I LOVE PYTHON AND C++.


*/

