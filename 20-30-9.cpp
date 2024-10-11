#include <iostream>
#include <cstdlib>

using namespace std;
int main(void)
{
    #ifndef STR              		// 如果STR沒有被定義
        char STR[] = "hello c++";
        cout << STR << endl;
    #else               			// STR有被定義
        cout << "已經被定義" << endl;
    #endif
    system("pause");
    return 0;
}

/* 牛刀小試 第二十章 第9題   

習9
利用ifndef判斷是否定義STR
沒有的話印出 hello c++
有的話印出 已經被定義

--------------output---------------

hello c++

*/