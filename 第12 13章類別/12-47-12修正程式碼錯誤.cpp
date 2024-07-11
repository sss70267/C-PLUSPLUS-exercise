#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
    private:
        int width;
        int height;
    
    public:
        void show_area(void)
        {
            cout << "area:" << width*height;
        }
        void set_length(int a,int b)            //新增設定函數,外部無法呼叫width,height
        {
            width=a;
            height=b;
            
        }

};

int main(void)
{
    CWin win1;
    win1.set_length(10,20);
    win1.show_area();


    system("pause");
    return 0;
}


/* 牛刀小試 第十二章 第十二題 修正程式碼錯誤

--------------原題-------------

#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
    private:
        int width;
        int height;
    
    public:
        void show_area(void)
        {
            cout << "area:" << width*height;
        }

};

int main(void)
{
    CWin win1;
    win1.width=5;
    win1.height=12;
    win1.show_area();


    system("pause");
    return 0;
}


*/