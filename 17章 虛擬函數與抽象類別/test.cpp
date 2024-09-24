#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                        // 定義抽象類別CShape
{
    public:
        virtual int area()=0;  		// 定義area()為泛虛擬函數
        virtual void show_area()=0;    	// 定義show_area()為虛擬函數
        virtual ~CShape();             // 定義 ~CShape() 為虛擬解構元 

};
CShape::~CShape()                       //將解構元~CShape() 撰寫在類別外
{
    cout << "~CShape()解構元被呼叫了..." << endl;
    //system("pause");
} 

class CWin :public CShape
{
    protected:
        int width, height;
     
    public:
        CWin(int w=10, int h=10):width(w),height(h){} // CWin()建構元
     
        virtual int area();
     
        void show_area() {
            cout << "CWin物件的面積 = " << area() << endl;
        } 
        virtual ~CWin();  		                // ~CWin() 解構元 

};

CWin::~CWin()
{
    cout << "~CWin()解構元被呼叫了..." << endl;
    //system("pause");
}   
int CWin::area()                //將子類別CWin虛擬函數area()撰寫至類別外
{
    return width*height;
}


class CMiniWin : public CWin        // 定義由CWin所衍生出的子類別CMiniWin
{
    public:     
        CMiniWin(int w,int h):CWin(w,h){}    // CMiniWin()建構元
     
        virtual int area();

        void show_area(){
            cout << "CMiniWin物件的面積 = " << area() << endl;
        }       
        virtual ~CMiniWin();   	                // ~CMiniWin() 解構元 

};
int CMiniWin::area()            //將子類別CMiniWin虛擬函數area()撰寫至類別外
{
    return (int) (0.5*width*height);
}

CMiniWin::~CMiniWin()
{
    cout << "~CMiniWin()解構元被呼叫了..." << endl;
    //system("pause");
}   


int main(void)
{
    CShape *ptr=new CWin(50,60);	
    ptr->show_area();
    cout << "銷毀CWin物件..." << endl;
    delete ptr;
    cout << endl;     
   
    ptr=new CMiniWin(50,50);
    ptr->show_area();
    cout << "銷毀CMiniWin物件..." << endl;
    delete ptr;   
    cout << endl;
    
    CMiniWin m_win(100,100); 
    m_win.show_area();

    //system("pause");
    return 0;
}


/* 牛刀小試 第十七章 第13題

習題13 將所有虛擬函數與解構元移至類別外

---------------output---------------
CWin物件的面積 = 3000
銷毀CWin物件...
~CWin()解構元被呼叫了...
~CShape()解構元被呼叫了...

CMiniWin物件的面積 = 1250
銷毀CMiniWin物件...
~CMiniWin()解構元被呼叫了...
~CWin()解構元被呼叫了...
~CShape()解構元被呼叫了...

CMiniWin物件的面積 = 5000
~CMiniWin()解構元被呼叫了...
~CWin()解構元被呼叫了...
~CShape()解構元被呼叫了...
*/