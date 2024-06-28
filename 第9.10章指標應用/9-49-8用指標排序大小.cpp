#include<iostream>
#include<cstdlib>
using namespace std;

void sort(double *,double *,double *);

int main(void)
{
    double a=3133,b=423,c=334;
    double *ptr1=&a,*ptr2=&b,*ptr3=&c;

    sort(ptr1,ptr2,ptr3);

    cout << endl;


    

    //system("pause");
    return 0;
}

void sort(double *ptr1,double *ptr2,double *ptr3)
{
        if(*ptr1 > *ptr2 and *ptr2 > *ptr3)
            cout << *ptr1 << ">" << *ptr2 << ">" << *ptr3;
        if(*ptr2 > *ptr3 and *ptr3 > *ptr1)
            cout << *ptr2 << ">" << *ptr3 << ">" << *ptr1;
        if(*ptr3 > *ptr1 and *ptr1 > *ptr2)
            cout << *ptr3 << ">" << *ptr1 << ">" << *ptr2;
        if(*ptr3 > *ptr2 and *ptr2 > *ptr1)
            cout << *ptr3 << ">" << *ptr2 << ">" << *ptr1;    
    return;

}

//第九章 牛刀小試 第八題 使用指標讓三個整數做大小排序
/* output

3133>423>334


*/