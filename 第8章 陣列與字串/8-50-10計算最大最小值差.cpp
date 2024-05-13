#include<iostream>
#include<cstdlib>
using namespace std;

void dif(int a[],int);

int main(void)
{
    int a[5]={};
    int size = sizeof(a)/sizeof(int);                   //確認陣列有幾個值

    cout << "輸入" << size << "個整數數值:" << endl;
    for(int i=0;i<size;i++)
        {
            cout << "a[" << i <<"]=";                   //手動輸入5個數值
            cin >> a[i];
        }

    dif(a,size);                                        //計算函數

    //system("pause");
    return 0;

}

void dif(int a[],int size)
{

    int maxa,mina;                                      //最大引數及最小引數變數
    int max=a[0],min=a[0];                              //最大值及最小值變數

    for(int i=0;i<size;i++)
        if(max<a[i])
            {
                max=a[i];
                maxa=i;
            }
    for(int j=0;j<size;j++)
        if(min>a[j])
            {
                min=a[j];
                mina=j;
            }
    cout << "最大值引數" << maxa << endl;
    cout << "最小值引數" << mina << endl;
    cout << "差值為:" << max-min;                       //計算差值
    return ;
}

//第八章 牛刀小試 第十題 找出最大值跟最小值索引,並計算最大值跟最小值的差
/* output

輸入5個整數數值:
a[0]=1
a[1]=2
a[2]=3
a[3]=4
a[4]=5
最大值引數4
最小值引數0
差值為:4       

*/