#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
    private:
        char id;
        int width,height;
    public:
        CWin(char i,int w,int h):id(i),width(w),height(h)
        {}
        
        friend int area(CWin win)
        {
            return win.height*win.width;
        }
        friend void get_id(CWin win)
        {
            cout << "window:" << win.id;
        }

        friend void compare(CWin win1,CWin win2)
        {
            if(area(win1)>area(win2))
                {
                    get_id(win1);
                    cout << " is larger" << endl;
                }
            else
                {
                    get_id(win2);
                    cout << " is larger" << endl;
                }
        };

};


int main(void)
{
    CWin win1('a',100,100);
    CWin win2('b',200,200);
    compare(win1,win2);

    //system("pause");
    return 0;
}

/* 牛刀小試 第十三章 第六題 使用友誼函數使 get_id ,area ,compare 為CWin的友誼函數

window:b is larger      

*/