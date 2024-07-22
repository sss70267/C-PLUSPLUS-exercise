#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
    private:
        char id;
        int width,height;
    public:
        CWin(char i,int w=100,int h=100)                //預設建構元無法設置兩個
        {
            id=i;
            width=w;
            height=h;
            cout << "建構元被呼叫了" << endl;
        }
        CWin()
        {
            cout << "建構元被呼叫了" << endl;
        }

};

int main(void)
{
    CWin win1('a',81);
    CWin win2;


    system("pause");
    return 0;
}

/* 牛刀小試 第十三章 第四題 修正程式碼錯誤 

---------------原題----------------
#include<iostream>
#include<cstdlib>
using namespace std;

class CWin
{
    private:
        char id;
        int width,height;
    public:
        CWin(char i='D',int w=100,int h=100)
        { 
            cout << "建構元被呼叫了" << endl;
        }
        CWin()
        {
            cout << "建構元被呼叫了" << endl;
        }

};

int main(void)
{
    CWin win1('a',81,99);
    CWin win2;


    system("pause");
    return 0;
}



*/