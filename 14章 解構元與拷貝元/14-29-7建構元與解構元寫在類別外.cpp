#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
    private:
        char id, *title;          // 宣告title為指向字元陣列的指標	    
     
    public:     
        void show(void)
        {
            cout << "Window " << id << ": " << title << endl;
        }
        CWin(char,char *);
        ~CWin();
        
};

        CWin::CWin(char i, char *text="Default window"):id(i)
        {
            title=new char[strlen(text)+1];       // 配置記憶體空間
            strcpy(title,text);
        }
        CWin::~CWin()                    // 解構元的原型
        {
            cout << "解構元被呼叫了,Win " << this->id << "被銷毀了.." << endl;
            delete [] title;  	    // 釋放title所指向的記憶體空間
            //system("pause");
        }

int main(void)
{
   CWin win1('A',"Main window");
   CWin win2('B');
   
   win1.show(); 
   win2.show();
   cout << "sizeof(win1)= " << sizeof(win1) << endl;
   cout << "sizeof(win2)= " << sizeof(win2) << endl;  

   system("pause");
   return 0;
}
/* 牛刀小試 第十四章 第七題 建構元及解構元定義在類別外
 
解構元被呼叫了,Win B被銷毀了..
解構元被呼叫了,Win A被銷毀了..

*/

