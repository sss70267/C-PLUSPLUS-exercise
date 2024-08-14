#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // 定義視窗類別CWin
{
    private:
        char id;
        int width, height;
     
    public:     
        CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)
        {}
   
        void show_member(void)
        {
            cout << "Window " << id << ": ";
            cout << "width=" << width << ", height=" << height << endl;
        }
        CWin operator+(CWin &);      // 定義「+」運算子的多載
};

CWin CWin::operator+(CWin &win)
{
    
    int w,h;
    w = this->width > win.width ? this->width : win.width;
    h = this->height > win.height ? this->height : win.height;
    return CWin('D',w,h);       // 呼叫建構元建立並傳回新的物件
    
}

int main(void)
{
    CWin win1('A',70,80);
    CWin win2('B',60,90); 
    CWin win3;
   
    win3=win1.operator+(win2);
    win3.show_member();
   
    system("pause");
    return 0;
}

/* 牛刀小試 第十五章 第六題 將operator+更改到類別外 

Window D: width=70, height=90

*/