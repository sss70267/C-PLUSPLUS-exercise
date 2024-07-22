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
        int area(void)
        {
            return width*height;
        }

        friend void compare(CWin win1,CWin win2)
        {
            if(win1.area() >= win2.area())
                {
                    cout << "window " << win1.id << " is larger" << endl;
                    cout << win1.area();
                }
            else
                {
                    cout << "window " << win2.id << " is larger" << endl; 
                    cout << win2.area();
                }
        }

};

int main(void)
{
    CWin win1('a',100,200);
    CWin win2('b',200,200);
    compare(win1,win2);

    //system("pause");
    return 0;
}

/* 牛刀小試 第十三章 第五題 使用友誼函數建立compare 比較大小

window b is larger
40000          

*/