#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char,int,int);	// 有三個引數的建構元
     CWin(int ,int );		// 只有兩個引數的建構元     
     void show_member(void)  	// 成員函數，用來顯示資料成員的值
     {
        cout<< "Window " << id << ": ";
        cout<< "width=" << width << ", height=" << height << endl;
     }
};

CWin::CWin(char i,int w,int h)
{
        id=i;
        width=w;
        height=h;
        cout << "CWin(char,int,int) 建構元被呼叫了..." << endl;
}
CWin::CWin(int w,int h)
     {
        id='Z';
        width=w;
        height=h;
        cout << "CWin(int,int) 建構元被呼叫了..." << endl;        
     }   

int main(void)
{
   CWin win1('A',50,40); 		// 建立win1物件，並呼叫三個引數的建構元
   CWin win2(80,120); 		    // 建立win2物件，並呼叫二個引數的建構元
      
   win1.show_member();  
   win2.show_member();
     
   //system("pause");
   return 0;
}

/* 牛刀小試 第十三章 第一題 將建構元移至類別外

CWin(char,int,int) 建構元被呼叫了...    
CWin(int,int) 建構元被呼叫了...
Window A: width=50, height=40
Window Z: width=80, height=120

*/
