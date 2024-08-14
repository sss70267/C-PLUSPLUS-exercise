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
    int get_w()
    {
        return width;
    }

    int get_h()
    {
        return height;
    }
};

CWin operator+(CWin &win1,CWin &win2)      
{
    int w,h;
    w = win1.get_w() > win2.get_w()? win1.get_w() : win2.get_w();       //私有成員不能直接呼叫需要另外撰寫成員函數
    h = win1.get_h() > win2.get_h() ? win1.get_h() : win2.get_h();
    return CWin('D',w,h);       // 呼叫建構元建立並傳回新的物件
}
int main(void)
{
    CWin win1('A',70,80);
    CWin win2('B',60,90); 
    CWin win3;
   
    win3=win1+win2;                  // 物件的加法運算
    win3.show_member();
   
    system("pause");
    return 0;
}

/* 牛刀小試 第十五章 第七題 將operator+更改為一般成員函數

Window D: width=70, height=90

*/