#include<iostream>
#include<cstdlib>
using namespace std;

double mini(double *,double *,double *);

int main(void)
{
    double a=10,b=22.2,c=2.6;
    double *ptr1=&a,*ptr2=&b,*ptr3=&c;



    cout << "最小值為:" << mini(ptr1,ptr2,ptr3) << endl;


    //system("pause");
    return 0;
}

double mini(double *a,double *b,double *c)
{
    double *min;

    if(*a < *b)
        min=a;
    else
        min=b;
    if(*min > *c)
        min=c;

    return *min;

}

//第九章 牛刀小試 第十一題 使用指標找最小值
/* output

最小值為:2.6ㄌ ㄌ


*/