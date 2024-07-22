#include<iostream>
#include<cstdlib>
using namespace std;

class CRectangle
{
    private:
        int width,height;
    public:
        CRectangle(int w,int h):width(w),height(h)
        {}
        CRectangle()
        {
            width = 10;
            height =10;
        }

        void show_member()
        {
            cout << "width=" << width << " height=" << height << endl;
        }
    
};

int main(void)
{
    CRectangle win1(1011,11);
    CRectangle win2;
    cout << "win1建構元:" << endl;
    win1.show_member();
    cout << "win2建構元:" << endl;
    win2.show_member();


    //system("pause");
    return 0;
}

/* 牛刀小試 第十三章 第三題 建立類別 CRectangle 並設定值CRectangle(w,h)的建構元,與預設建構元 width = 10 height =10

win1建構元:
width=1011 height=11
win2建構元:
width=10 height=10

*/