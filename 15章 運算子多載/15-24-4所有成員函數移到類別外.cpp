#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                              // 定義視窗類別CWin
{
    private:
        char id;
        int width, height;

    public:
        CWin(char i,int w,int h):id(i),width(w),height(h)  // 建構元
        {}
        int operator>(CWin &);
        int operator>(const int &);
        int area(void);
};

int CWin::area(void)
{
    return(width*height);
}

int operator>(const int &var, CWin &win)
{
    return( var > win.area());
}

int CWin::operator>(CWin &win)
{
    {
        return(this->area() > win.area());
    }
}
int CWin::operator>(const int &var)
{
    return(this->area() > var);
}

int main(void)
{
    CWin win1('A',70,80);
    CWin win2('B',60,70);
    
    cout << "win1 area=" << win1.area() << endl;
    cout << "win2 area=" << win2.area() << endl;

    if(win1>win2)                                        // 呼叫第一個operator>()函數
        cout << "win1 is larger than win2" << endl;
    else
        cout << "win1 is smaller than win2" << endl;

    if(win1>7000)                                        // 呼叫第二個operator>()函數
        cout << "win1 is larger than 7000" << endl;
    else
        cout << "win1 is smaller than 7000" << endl;

    if(4500>win2)                                        // 呼叫第三個operator>()函數
        cout << "win2 is smaller than 4500" << endl;
    else
        cout << "win2 is larger than 4500" << endl;

    system("pause");
    return 0;
}

/* 牛刀小試 第十五章 第四題 將CWin成員函數全部移置類別外
 
win1 area=5600
win2 area=4200
win1 is larger than win2
win1 is smaller than 7000
win2 is smaller than 4500

*/
