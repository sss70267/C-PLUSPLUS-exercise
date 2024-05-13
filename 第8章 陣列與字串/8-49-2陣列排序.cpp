#include<iostream>
#include<cstdlib>
using namespace std;

int sort(int []);               //取c最小值的函數

int main(void)
{
    
    int a[]={1,5,2,3,7};
    int b[]={4,11,31,24,51};
    int c[10]={},d[10]={};     //d[]為新陣列

    int i;

    for(i=0;i<5;i++)
        c[i] = a[i];
    for(i=0;i<5;i++)
        c[i+5] = b[i];
    cout << "合成新陣列c[10]=";
    for(i=0;i<10;i++)
        cout << c[i] << " ";
    cout << endl;

    for(i=0;i<10;i++)
    {   
        d[i]=c[sort(c)];         //取c[]最大值的位置
        c[sort(c)]=1;            //讓c[]等於陣列中最小的值重複執行
    }
    
    cout << "新陣列為d[10]=";
    for(i=0;i<10;i++)
        cout << d[i] << " ";

    cout << endl;
    
    system("pause");
    return 0;

}

int sort(int a[])
{   
    int maxa;
    int max=a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxa=i;
        }
    }
    return maxa;

}


//第八章 牛刀小試 第二題 設ab陣列各為5個值別由大到小排序成新的陣列

/* output

合成新陣列c[10]=1 5 2 3 7 4 11 31 24 51 
新陣列為d[10]=51 31 24 11 7 5 4 3 2 1 

*/