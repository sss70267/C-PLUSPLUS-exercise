#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                        // 定義CWin類別，在此為父類別
{
    protected:
        char id;
        int width, height;
    public:
        CWin(char i='D',int w=10, int h=10)   // 父類別的建構元
        {
            id=i;
            width=w;
            height=h;   
        }
        void show_area()            // 父類別的show_area()函數
        {
            cout << "Window " << id << ", area = " << area() << endl;
        }
        virtual double area()          // 父類別的area()函數
        {
            return width*height;
        } 
};

class CMiniWin : public CWin      // 定義子類別CMiniWin
{
    public:     
        CMiniWin(char i,int w,int h):CWin(i,w,h){}  // 子類別的建構元
     
        virtual double area()    	      // 子類別的area()函數
        {
            return (double)(0.8*width*height); 
        }
};

int main(void)
{
    CWin win('A',70,80);			  // 建立父類別物件win
    CMiniWin m_win('B',50,60);	  // 建立子類別物件m_win
  
    win.show_area();		          // 以父類別物件win呼叫show_area()函數
    m_win.show_area();	  	      // 以子類別物件m_win呼叫show_area()函數

    system("pause");
    return 0;
}

/* 牛刀小試 第十七章 第2題   

改寫 virtaul int area()改為double

父類別與子類別需一起改寫為double否者會認定為不同函數

--------------output---------------
Window A, area = 5600
Window B, area = 2400

*/