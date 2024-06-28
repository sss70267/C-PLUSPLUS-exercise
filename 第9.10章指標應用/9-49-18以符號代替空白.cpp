#include<iostream>
#include<cstdlib>

using namespace std;

void replace_star(char *);

int main(void)
{
    char lower[80];

    cout << "輸入英文小寫字串:" << endl;
    cin.getline(lower,80);


    replace_star(lower);
    cout << lower;



    //system("pause");
    return 0;
}

void replace_star(char *str1)
{
   int j;
   for(j=0;j<strlen(str1);j++)
      if (*(str1+j)=='\0')
         break;
      
      else if((*(str1+j) == 32)) //ASCII編碼
      *(str1+j)+=10;
      

   return;
}

//第九章 牛刀小試 第十八題 使用指標 空白變為*符號
/* output

輸入英文小寫字串:
l love python and c++.
l*love*python*and*c++.


*/

