#include<iostream>
#include<cstdlib>
using namespace std;

class CTime
{
    private:
        int hour,min;
        double sec;
    public:
        CTime(int h,int m,double s):hour(h),min(m),sec(s)
        {

        }
        CTime()
        {
            cout << "呼叫預設建構元" << endl;
        }
    
    void set_time(int h,int m,double s)
    {
        hour = h;
        min = m;
        sec = s;
    }

    void show_time()
    {
        cout << hour << "hour " << min << "min " << sec << "sec" << endl;
    }

    int operator>(CTime &t)
    {
        return (this->hour > t.hour);
    }
    int operator<(CTime &t)
    {
        return (this->hour < t.hour);
    }

    void operator=(const CTime &t)
    {
        cout << "呼叫等於運算子" << endl;
        this->hour=t.hour;
        this->min=t.min;
        this->sec=t.sec;

    }

};

int main(void)
{
    CTime t1(4,23,56.3);
    CTime t2(5,45,30.3);
    CTime t3;
    CTime t4;
    CTime t5;

    t4.set_time(6,56,13.9);

    t1.show_time();
    t2.show_time();
    t4.show_time();
    
    if(t1 > t2)
        cout << "t1時間較大" << endl;
    else 
        cout << "t2時間較大" << endl;
    

    if(t1 < t2)
        cout << "t1時間較小" << endl;
    else  
        cout << "t2時間較小" << endl;

    
    t5=t1;                              //等於運算子
    t5.show_time();                     

    system("pause");
    return 0;

}


/* 牛刀小試 第十五章 第十五題 operator= 設定可執行 t1=t2

呼叫預設建構元
呼叫預設建構元
呼叫預設建構元
4hour 23min 56.3sec
5hour 45min 30.3sec
6hour 56min 13.9sec
t2時間較大
t1時間較小
呼叫等於運算子
4hour 23min 56.3se

*/