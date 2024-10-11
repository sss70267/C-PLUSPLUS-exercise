#include <iostream>
#include <cstdlib>
#include "CTextWin.h"
using namespace std;

int main(void)
{
    CTextWin txt('A',"Hello C++");
  
    txt.show();
   
    system("pause");
    return 0;
}

/* 牛刀小試 第二十章 第6題   

習6

試把程式碼模組化
CWin為父類別
CTextWin為子類別

--------------output---------------

Window A: text = Hello C++

*/