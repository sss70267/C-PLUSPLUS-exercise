#include <iostream>
#include <cstdlib>
#define SIZE 15
using namespace std;

int main(void)
{
    #ifdef SIZE
        #if SIZE>20
            char str[SIZE]="Hello C++";
        #elif SIZE >9 || SIZE <20
            cout << "welcome";
        #else
            char *str="SIZE too small";
        #endif
    #else
        char *str="SIZE not defined";
    #endif  
   
   
    system("pause");
    return 0;
}

/* 牛刀小試 第二十章 第10題   

習10
加入#elif判斷式 size 10~19 輸出 welcome

--------------output---------------

welcome

*/