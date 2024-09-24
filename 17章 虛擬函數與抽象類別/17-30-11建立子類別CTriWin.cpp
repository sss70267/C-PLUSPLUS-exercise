#include<iostream>
#include<cstdlib>
using namespace std;

class CShape                                    //抽象類別
{
    public:
        virtual int area()=0;

        void show_area()
        {
            cout << "area = " << area() << endl;
        }
};

class CWin : public CShape
{
    protected:
        int width,height;
    
    public:
        CWin(int w=10,int h=10)
        {
            width = w;
            height = h;
        }
        virtual int area()
        {
            return width*height;
        }
        void show_area()
        {
            cout << "CWin面積 = " << area() << endl;
        }
};

class CTriWin : public CShape
{
    public:
        int base,height;
    
    CTriWin(int b=10,int h=10):base(b),height(h)
    {

    }
    
    virtual int area()
    {
        return base*height/2;
    }

    void show_area()
    {
        cout << "CTriWin面積 = " << area() << endl;
    }
    

};


int main(void)
{
    CTriWin obj1;
    obj1.show_area();

    system("pause");
    return 0;
}

/* 牛刀小試 第十七章 第11題   

習11
建立子類別CTriWin 並定義建構元、area()、show_area()並測試

--------------output---------------

CTriWin面積 = 50

*/