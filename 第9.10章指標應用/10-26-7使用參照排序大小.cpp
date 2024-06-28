#include<iostream>
#include<cstdlib>
using namespace std;

void sort(int &,int &,int &);

int main(void)
{
    int a=12,b=11,c=33;
    cout << "排序前:" << a <<" " << b << " " << c << endl;
    sort(a,b,c);
    cout << "排序後:" << a <<" " << b << " " << c << endl;

    //system("pause");
    return 0; 
}


void sort(int &a,int &b,int &c)
{
    int arr[3];
    int i,j,temp;
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    for(i=0;i<3;i++)                //三個變數
        for(j=0;j<2;j++)
            if(arr[j] < arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

    a=arr[0];
    b=arr[1];
    c=arr[2];
    return;
}

//第十章 牛刀小試 第七題 使用參照進行大小排序
/* output

排序前:12 11 33
排序後:33 12 11
                                                                          
*/