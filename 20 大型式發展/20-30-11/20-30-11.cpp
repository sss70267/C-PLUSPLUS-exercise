#include <iostream>
#include <cstdlib>
#include "CminiWin.h" 	
#include "show.cpp"	  //載入定義的函數
using namespace std;

int main(void)
{
   CWin win1('A',50,60);          	// 建立win1物件
   CMiniWin m_win('M',40,50);    	// 建立m_win物件

   win1.show();              		// 以win1物件呼叫show()
   m_win.show();			 		// 以m_win物件呼叫show()

   system("pause");
   return 0;
}

/* 牛刀小試 第二十章 第11題   

習11

show函數原型留在cminiwin.h 
show.cpp定義show()
以專案方式編譯
*/
