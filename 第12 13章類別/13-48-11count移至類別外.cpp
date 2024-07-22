#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    				       // 定義視窗類別CWin
{
    private:
        char id;
        int width, height;
        static int num;   		       // 靜態資料成員
     
    public:     
        CWin(char i,int w,int h):id(i),width(w),height(h)  
        {
            num++;
        }
        CWin()
        {
            num++;     
        }
        static void count();       // 靜態成員函數

};
int CWin::num=0; 
void CWin::count()
    {
        cout << "已建立:" << num << "個物件" << endl;
    }

int main(void)
{

   CWin win1('A',50,40); 	
   CWin win2('B',60,80);

   CWin my_win[5];
   CWin::count();                  // 用類別呼叫靜態成員函數
     
   system("pause");
   return 0;
}
/* 牛刀小試 第十三章 第十一題 將count函數移置類別外

largest window= A
平均值為:3533.33

*/