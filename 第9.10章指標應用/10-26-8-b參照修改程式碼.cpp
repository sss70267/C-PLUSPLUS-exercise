#include<iostream>
#include<cstdlib>
using namespace std;
int *min(int *,int *);

int main(void)
{
    int a=32,b=59;
    int &ref1=a,&ref2=b;


    cout << "a=" << a << ", b=" << b << endl;
    *min(&ref1,&ref2)=100;
    cout << "a=" << a << ", b=" << b << endl;

    //system("pause");
    return 0;
}

int *min(int *x,int *y)
{
    if(*x>*y)
        return y;
    else
        return x;
}

//第十章 牛刀小試 第八題 使用參照修改程式碼
/* output

a=32, b=59
a=100, b=59
                                                                          
*/