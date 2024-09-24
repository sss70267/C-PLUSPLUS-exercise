#include <iostream>
#include <cstdlib>
using namespace std;

class CWin                      // 定義CWin類別，在此為父類別
{
    protected:
        char id;
        int width, height;
    public:
        CWin(char i='D',int w=10, int h=10)           // 父類別的建構元
        {
            id=i;
            width=w;
            height=h;   
        }
         void show_area()          // 父類別的show_area()函數
        {
            cout << "Window " << id << ", area = " << area() << endl;
        }
        virtual int area()        // 父類別的area()函數
        {
            return width*height;
        }
};

class CMiniWin : public CWin    // 定義子類別CMiniWin
{
    public:     
        CMiniWin(char i,int w,int h):CWin(i,w,h){}    // 子類別的建構元
     
        virtual int area()    	   // 子類別的area()函數
        {
            return (int)(0.8*width*height); 
        }
};

int main(void)
{
    CWin win('A',70,80);
    CMiniWin m_win('B',50,60);	// 建立子類別的物件
  
    CWin *ptr=NULL;   			// 宣告指向基底類別(父類別)的指標
   
    ptr=&win;					// 將ptr指向父類別的物件win
    cout << "CWin area函數面積:" << ptr->area() << endl;			// 以ptr呼叫show_area()函數
   
    ptr=&m_win;				// 將ptr指向子類別的物件m_win
    cout << "CMinWin area函數面積" << ptr->area();	  		// 以ptr呼叫show_area()函數

   system("pause");
   return 0;
}

/* 牛刀小試 第十七章 第2題   

指標改指向area()函數

父類別與子類別需一起改寫為double否者會認定為不同函數

--------------output---------------
CWin area函數面積:5600
CMinWin area函數面積2400

*/
