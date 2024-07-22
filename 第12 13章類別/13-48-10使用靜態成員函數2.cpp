#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義視窗類別CWin
{
    private:
        char id;
        int width, height;
        static double avg;
       
    public:     
        void set_member(char i,int w,int h)
        {
        id=i;
        width=w;
        height=h;
        }
        int area(void) 
        {
            return width*height;
        }
        static void average(CWin win[],int n)       //建立3個面積平均
        {
            for(int i=0;i<n;i++)
                avg+=win[i].area();
            cout << "平均值為:" << avg/3.0f;
        }
            
        friend void largest(CWin [], int);  	// 友誼函數的原型
};

    void largest(CWin win[], int n)   		    // 定義友誼函數largest
    {
        int max=0,iw;
        for(int i=0; i<n; i++)
            if(win[i].area()>max)			        // 判別面積是否比max還大
            {
                iw=i;				
                max=win[i].area();
            }      
    cout << "largest window= " << win[iw].id << endl;    // 印出id成員
    }   

double CWin::avg=0;    

int main(void)
{
    CWin win[3];
     
    win[0].set_member('A',60,70);
    win[1].set_member('B',40,60);   
    win[2].set_member('C',80,50);

    
    largest(win,3);                          // 呼叫largest()函數
    win[0].average(win,3);
        
    //system("pause");
    return 0;
}

/* 牛刀小試 第十三章 第十題 新增average靜態成員函數計算平均值

largest window= A
平均值為:3533.33

*/
