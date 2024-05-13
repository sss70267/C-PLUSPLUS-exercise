#include<iostream>
#include<cstdlib>
using namespace std;

void count(int [],int);

int main(void)
{

    int list_a[] = {1,3,2,5,6,2,6};
    int size = sizeof(list_a)/sizeof(int);                  //計算陣列數量
    
    cout << "陣列內容:";            
    for(int i=0;i<size;i++)                                 //印出陣列內容
        cout << list_a[i] << " ";
    cout << endl;
    count(list_a,size);                                     //執行函數

    system("pasue");
    return 0;
}

void count(int array[],int size)
{

    int even = 0;                       //偶數個數變數
    int odd = 0;                        //基數數量變數
    int i;
    
    for(i=0;i<size;i++)
        if (array[i]%2==0)
            even+=1;                   //可除以2 偶數 +=1
    
    odd = i - even;               

    cout << "奇數個數為:" << odd << endl;
    cout << "偶數個數為:" << even << endl;
    return;
}

//第八章 牛刀小試 第十二題  計算陣列內容,並計算奇數跟偶數數量
/* output

陣列內容:1 3 2 5 6 2 6 
奇數個數為:3
偶數個數為:4

*/