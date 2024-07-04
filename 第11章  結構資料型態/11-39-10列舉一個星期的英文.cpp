#include<iostream>
#include<cstdlib>
using namespace std;

enum weeks
{
    Monday,Tuesday,Wednesday,
    Thursday,Friday,Saturday,Sunday
}week;

int main(void)
{
    string a[7]={"Monday","Tuesday","Wednesday",
    "Thursday","Friday","Saturday","Sunday"};

    for(week=Monday;week<=Sunday;week=static_cast<weeks>(week+1))
        cout << a[week] << endl;; 


    system("pause");
    return 0;
}


/*  牛刀小試 第十一章 第十題 以列舉型態印出1個星期的英文

Monday
Tuesday
Wednesday
Thursday
Friday
Saturday
Sunday

*/