#include<iostream>
#include<cstdlib>
using namespace std;
class CRect
{
    public:
        int width;
        int height;
        double weight;
    
        void set(double wg)
        {
            weight=wg;
        }
        void set(int w,int h)
        {
            width=w;
            height=h;
        }
        void set(double wg,int w,int h)
        {
            weight=wg;
            width=w;
            height=h;
        }
        void show()
        {
            cout << "width:" << width << endl;
            cout << "height:" << height << endl;
            cout << "weight:" << weight << endl;
        }

};

int main(void)
{
    CRect test1,test2;

    test1.set(5.5);                 //設定重量
    test1.set(2,6);                //設定寬高
    test2.set(7.2,6,4);            //設定重量 寬 高

    cout << "test1成員值:" << endl;
    test1.show();
    cout << endl;
    cout << "test2成員值:" << endl;
    test2.show();


    //system("pause");
    return 0;
}

/* 牛刀小試 第十二章 第八題 設定類別資料成員 並利用函數多載建立函數

test1成員值:
width:2
height:6
weight:5.5

test2成員值:
width:6
height:4
weight:7.2

*/