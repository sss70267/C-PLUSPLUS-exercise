#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

typedef struct
{
    int hour;
    int minite;
    float second;
}my_time;
void subs(my_time t[]);
void mius(my_time t[]);


int main(void)
{
    int i;
    my_time t[3]={{6,24,17.43f},{3,52,45.58f}};
    cout << setfill('0');                       //字串不足補0

    cout << "t[2]=t[0]+t[1]相加後" << endl;
    subs(t);
    for(i=0;i<3;i++)
    {
        cout << "t[" << i << "]=" << setw(2) << t[i].hour << ":";
        cout <<  setw(2) << t[i].minite << ":";
        cout <<  setw(5) << t[i].second << endl;
    }

    cout << "t[2]=t[0]-t[1]相減後" << endl;
    mius(t);
    for(i=0;i<3;i++)
    {
        cout << "t[" << i << "]=" << setw(2) << t[i].hour << ":";
        cout <<  setw(2) << t[i].minite << ":";
        cout <<  setw(5) << t[i].second << endl;
    }

    system("pause");
    return 0;
}

void subs(my_time t[])
{
    int count2=0,count3=0;
    t[2].second=t[0].second+t[1].second;
    while(t[2].second>=60)
    {
        t[2].second-=60;
        count3++;
    }
    t[2].minite=t[0].minite+t[1].minite+count3;

    while(t[2].minite>=60)
    {
        t[2].minite-=60;
        count2++;
    }
    t[2].hour=t[0].hour+t[1].hour+count2;
    return;

}

void mius(my_time t[])
{
    t[2].hour=t[0].hour-t[1].hour;
    t[2].minite=t[0].minite-t[1].minite;
    while(t[2].minite<=0)
    {
        t[2].hour--;
        t[2].minite+=60;
    }
    t[2].second=t[0].second-t[1].second;
    while(t[2].second<=0)
    {
        t[2].minite--;
        t[2].second+=60;
    }

    return;
}


/*  牛刀小試 第十一章 第十三題 自訂型態 計算時間相減和相加

t[2]=t[0]+t[1]相加後
t[0]=06:24:17.43
t[1]=03:52:45.58
t[2]=10:17:03.01
t[2]=t[0]-t[1]相減後
t[0]=06:24:17.43
t[1]=03:52:45.58
t[2]=02:31:31.85

*/