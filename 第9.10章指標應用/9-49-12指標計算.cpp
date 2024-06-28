#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int a=5,b=3;
    int *ptr1=&a,*ptr2=&b;

    *ptr1=a+b;


    cout << *ptr1;



    system("pause");
    return 0;

}

//第九章 牛刀小試 第十二題 使用指標a+b在存放至*ptr1
/* output

8


*/