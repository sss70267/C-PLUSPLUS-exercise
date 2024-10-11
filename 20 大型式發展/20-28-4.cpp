#include <iostream>   
#include <cstdlib>

namespace name1          // 設定名稱空間name1
{
    int var=5;            // 在名稱空間name1內宣告變數var
}
int main(void)
{
    int var=10;           // 宣告區域變數var
   
    std::cout << "in name1, var= " << name1::var << std::endl;
    std::cout << "var= " << var << std::endl;
  
    std::system("pause");
    return 0;
}


/* 牛刀小試 第二十章 第4題   

習4
使用 早期ASNI C++標準寫法

--------------output---------------

in name1, var= 5
var= 10

*/