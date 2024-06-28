#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int *array_a,*array_b,*array_sum;
    array_a = new int[5];
    array_b = new int[5];
    array_sum = new int[5];
    int i;

    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,10};
    cout << "array_a:" << endl;
    for(i=0;i<5;i++)
        {
            array_a[i]=a[i];
            cout << array_a[i] << " ";

        }
    cout << endl;

    cout << "array_b:"<< endl;
    for(i=0;i<5;i++)
        {
            array_b[i]=b[i];
            cout << array_b[i] << " ";

        }
    cout << endl;

    cout << "array_sum:" <<endl;
    for(i=0;i<5;i++)
        array_sum[i]=array_a[i]+array_b[i];

    
    for(i=0;i<5;i++)
        cout <<*(array_sum+i) << " ";
    cout << endl;

    delete [] array_a;
    delete [] array_b;
    delete [] array_sum;
    
    cout << "記憶體配置刪除後" << endl;
    cout << "array_a= " ;              //記憶體殘值
    for(i=0;i<5;i++)
    cout << array_a[i] << " ";
    cout << "記憶體殘值" << endl;

    cout << "array_b= ";
    for(i=0;i<5;i++)
    cout << array_b[i] << " ";
    cout << endl;

    cout << "array_sum= ";
    for(i=0;i<5;i++)
    cout << array_sum[i] << " ";       
    
    //system("pause");
    return 0;
}

//第十章 牛刀小試 第六題 動態配置兩個陣列相加存到另一個陣列
/* output

array_a:
1 2 3 4 5 
array_b:
6 7 8 9 10 
array_sum:
7 9 11 13 15 
記憶體配置刪除後
array_a= 0 0 0 0 4 記憶體殘值
array_b= 0 0 0 0 0 
array_sum= 0 0 0 0 0 %      
                                                                                                   
*/