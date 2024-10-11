#include "CWIn.h"  	
#include "CminiWin.h" 
#include <iostream>
using namespace std;

void CWin::show(void) 	// 定義show()函數
{
   cout << "Window " << id << ":" << endl;
   cout << "Area = " << width*height << endl;
}

void CMiniWin::show(void)
{
   cout << "Mini window " << id << ":" << endl;
   cout << "Area = " << 0.8*width*height << endl;
}
