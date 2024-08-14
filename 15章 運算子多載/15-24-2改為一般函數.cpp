#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // 定義視窗類別CWin
{
    private:
        char id;
        int width, height;
     
    public:     
        CWin(char i,int w,int h):id(i),width(w),height(h) // 建構元 
        {}
        int area(void)  
        {
            return width*height;
        }  
};

int operator>(CWin &win1,CWin &win2)
{
    return (win1.area()>win2.area());
}

int main(void)
{
    CWin win1('A',70,80);		
    CWin win2('B',60,90); 			
              
    if(win1>win2)    // 判別win1與win2物件之面積的大小
        cout << "win1 is larger than win2" << endl;
    else
        cout << "win2 is larger than win1" << endl;   
       
    system("pause");
    return 0;
}

/* 牛刀小試 第十五章 第二題 operator 改為一般函數
 
win1 is larger than win2

*/