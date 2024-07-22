#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		                    // 定義視窗類別CWin
{
    private:
        char id;
        int width;   
        int height;
    public:
        int area() 		                // 定義成員函數area(), 用來計算面積
        {                 
            return width*height;
        }
        void show_area(void)
        {
            cout << "Window " << id << ", area=" << area() << endl;
        }
        friend void set_data(CWin &win, char i,int w ,int h)
        {
            win.id=i;
            win.width=w;
            win.height=h;
        }

        friend void set_data(CWin &win, char i)
        {
            win.id=i;
        }

        friend void set_data(CWin &win,int w ,int h)
        {
            win.width=w;
            win.height=h;
        }
 };

int main(void)
{
    CWin win1;
    CWin win2;
    set_data(win1,'a',10,10);
    set_data(win2,'b');
    set_data(win2,20,20);

    win1.show_area();
    win2.show_area();
    

    system("pause");
    return 0;
}


/* 牛刀小試 第十三章 第十四題 id,width,height 設為 private ,set_data為友誼函數多載

Window a, area=100
Window b, area=400

*/