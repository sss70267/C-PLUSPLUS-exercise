#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
    private:
        char id;
        int width,height;

    public:
        CWin(char i,int w,int h):id(i),width(w),height(h)
        {}
        CWin()
        {}
        CWin &compair(CWin &win)                    //回傳參照函數
        {
            if(this->area() > win.area())
                return *this;
            else
                return win;
        }
        int area(void)
        {
            return width*height;
        }
        char get_id(void)
        {
            return id;
        }
};

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,90);
   CWin win3;
   win3=win1.compair(win2);

   cout << "Window " << win3.get_id() << " is larger" << endl;

   system("pause");
   return 0;
}

/* 牛刀小試 第十三章 第十三題 使compare()傳回值為參照

Window A is larger

*/
