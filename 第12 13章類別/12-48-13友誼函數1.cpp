#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		           // 定義視窗類別CWin
{
    private:
        char id;
        int width;   
        int height;
    public:
        void set_data(char i,int w,int h)      // set_data() 函數
        {
            id=i;        	       // 設定id成員 
            width=w; 		       // 設定width成員
            height=h; 	           // 設定height成員
        }

    void show_area()   	   // 把show_area()定義成一般的函數
    {
        cout << "Window " << id << endl;
    }

    friend int area(CWin);
};



int area(CWin w) 		       // 定義成員函數area(), 用來計算面積
{                 
    return w.width*w.height;
}


int main(void)
{
   CWin win1;   
   
   win1.set_data('B',50,40);   // 由win1物件呼叫set_data()函數
   win1.show_area();     	   // 傳遞win1物件到show_area()函數裡
   cout << "面積為:" << area(win1);
   
   //system("pause");
   return 0;
}
/* 牛刀小試 第十二章 第十三題 設定area為友誼函數

Window B
面積為:2000

*/