#include<iostream>
#include<cstdlib>
using namespace std;

int max(int a[],int);

int main(void)
{   

    int a[]={1,4,2,3,5,77,98};
    int size=sizeof(a)/sizeof(int);
    cout << "a[" << size <<  "]陣列最大值為:";
    cout << max(a,size);

    system("pause");
    return 0;

}

int max(int a[],int size1)
{
    int maxa=a[0];
    for(int i=0;i<size1;i++)
        if(maxa<a[i])
            maxa=a[i];
    return maxa;

}

//第八章 牛刀小試 第九題 找出陣列最大值
/* output

ca[7]陣列最大值為:98%   

*/