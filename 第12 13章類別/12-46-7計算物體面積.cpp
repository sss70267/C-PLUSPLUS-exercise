#include<iostream>
#include<cstdlib>
using namespace std;

class CBox
{
    public:
    int length;
    int width;
    int height;

    int volume()
    {
        return length * width * height;
    }

    int SurfaceArea()
    {
        return length * width;
    }

    void set_length(int a,int b,int c)
    {
        length=a;
        width=b;
        height=c;


    }


};

int main(void)
{
    CBox Polygon;
    Polygon.set_length(10,20,30);
    cout << "計算體積面積:" << Polygon.volume();
    cout << endl;
    cout << "計算表面面積:" <<Polygon.SurfaceArea();

    //system("pause");
    return 0;
}

/* 牛刀小試 第十二章 第七題 設定類別資料成員length,width,heigth,並訂意函數幾算 體積面積與表面面積

計算體積面積:6000
計算表面面積:200  
*/