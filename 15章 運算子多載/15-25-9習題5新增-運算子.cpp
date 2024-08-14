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
    
    CTime operator+(CTime &t)
    {
        int h, m;
        double s;
        h=this->hour+t.hour;
        m=this->min+t.min;
        s=this->sec+t.sec;
        if(s>=60)
        {
            s-=60;
            m+=1;
        }
        if(m>=60)
        {
            m-=60;
            h+=1;
        }   
        return CTime(h,m,s);
    }

    CTime operator-(CTime &t)
    {
        int h,m;
        double s;
        h=this->hour-t.hour;
        m=this->min-t.min;
        s=this->sec-t.sec;
        if(s<0)
        {
            s+=60;
            m-=1;
        }
        if(m>=60)
        {
            m+=60;
            h-=1;
        }   
        return CTime(h,m,s);

    }

};

int main(void)
{
    CTime t1(4,23,56.3);
    CTime t2(5,45,30.3);
    CTime t3;
    CTime t4;
    CTime t5;
    CTime t6;

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

    cout << "t5=t1+t2" << endl;             //運算子+
    cout << "t5=";
    t5=t1+t2;
    t5.show_time();

    cout << "t6=t2-t1" << endl;               //運算子-
    cout << "t6=";
    t6=t2-t1;                               
    t6.show_time();
    

    system("pause");
    return 0;
}


/* 牛刀小試 第十五章 第九題 修改習題五 增加operator- 兩個物件相減設定給一個新的物件,自動進位

呼叫預設建構元
呼叫預設建構元
呼叫預設建構元
呼叫預設建構元
4hour 23min 56.3sec
5hour 45min 30.3sec
6hour 56min 13.9sec
t2時間較大
t1時間較小
t5=t1+t2
t5=10hour 9min 26.6sec
t6=t2-t1
t6=1hour 21min 34sec

*/