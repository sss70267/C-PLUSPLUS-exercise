#include<iostream>
#include<cstdlib>
using namespace std;
int *min(int *,int *);

int main(void)
{
    int a=32,b=59;

    cout << "a=" << a << ", b=" << b << endl;
    *min(&a,&b)=100;
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

//第十章 牛刀小試 第八題 使用指標修改程式碼
/* output

a=32, b=59
a=100, b=59
                                                                          
*/