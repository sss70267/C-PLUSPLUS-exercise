#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
    private:
        char id;
        int width,height;

    public:
        CWin(char i,int w,int h)
        {
            id = i;
            width = w;
            height = h;
        }
        CWin()
        {
            cout << "建構元被呼叫了"  << endl;
        }
        void show_member()
        {
            cout << "window" << ":" << id << endl;
            cout << "width=" << width << " height=" << height << endl; 
        }

};

int main(void)
{
    CWin win1('a',12,42);
    CWin win2;                  //預設建構元不需加入()
    win1.show_member();
    win2.show_member();

    //system("pauser");
    return 0;
}

/* 牛刀小試 第十三章 第二題 找出程式碼錯誤並修改

--------------------原程式碼-----------------------
#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
    private:
        char id;
        int width,height;

    public:
        CWin(char i,int w,int h)
        {
            id = i;
            width = w;
            height = h;
        }
        CWin()
        {
            cout << "建構元被呼叫了"  << endl;
        }
        void show_member()
        {
            cout << "window" << id << ":" << endl;
            cout << "width=" << width << "height=" << height << endl; 
        }

};

int main(void)
{
    CWin win1('a',12,42);
    CWin win2();
    win2.show_member();

    //system("pauser");
    return 0;
}


*/