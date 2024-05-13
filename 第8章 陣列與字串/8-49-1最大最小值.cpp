#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int a[]={40,51,21,77,99,81};
    int i,min=a[0],max=a[0];
    int length=sizeof(a)/sizeof(int);
    int mina=0,maxa=0;
    
    cout << "陣列的值:";
    for(i=0;i<length;i++)
    {
        cout  << a[i] << " ";
        if(a[i]>max)
        {
            max=a[i];
            maxa=i;             //找出最大值的位置
        }
        if(a[i]<min)
        {
            min=a[i];
            mina=i;             //找出最小值的位置
        }
    }
    cout << endl;
    cout << "陣列最大值為a[" << maxa << "]" << endl;
    cout << "陣列最小值為a[" << mina << "]" << endl;

    cout << "最大與最小值的差:" << max-min << endl;
    cout << "最大與最小值的和:" << max+min << endl;
    system("pause");
    return 0;

}

//第八章 牛刀小試 第一題 計算陣列的最大值跟最小值,並計算差與和
/* output 

陣列的值:40 51 21 77 99 81 
陣列最大值為a[4]
陣列最小值為a[2]
最大與最小值的差:78
最大與最小值的和:120

*/