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
    
    CTime& operator=(const CTime &t)
    {
        cout << "呼叫=運算子" << endl;
        this->hour=t.hour;
        this->min=t.min;
        this->sec=t.sec;
        return *this;
    }
};

int main(void)
{
    CTime t1(4,23,56.3);
    CTime t2;
    CTime t3;
    CTime t4;

    t2=t3=t4=t1;

    t1.show_time();
    t2.show_time();
    t3.show_time();
    t4.show_time();

    system("pause");
    return 0;
}


/* 牛刀小試 第十五章 第五題 CTime 增加成員函數 set_time 與運算子  operator>,operator<,並建立預設建構元

is empty
is empty
4hour 23min 56.3sec
5hour 45min 30.3sec
6hour 56min 13.9sec
t2時間較大
t1時間較小

*/