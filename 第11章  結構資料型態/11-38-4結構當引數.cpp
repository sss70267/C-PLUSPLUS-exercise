#include<iostream>
#include<cstdlib>
using namespace std;

struct rectangle
{
    int l;
    int w;
    int h;
};
void area(struct rectangle);

int main(void)
{
    struct rectangle rec={10,4,5};
    cout << "長方體各長度:" << endl;
    area(rec);

    system("pause");
    return 0;
}

void area(struct rectangle a)
{
    cout << "長" << a.l << endl;
    cout << "寬" << a.w << endl;
    cout << "高" << a.h << endl;
    return;
}

/* 牛刀小試 第十一章 第四題 結構當引數傳入函數 
 
長方體各長度:
長10
寬4
高5

*/