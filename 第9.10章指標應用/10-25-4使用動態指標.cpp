#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int *a;
    a = new int[2];
    a[0] = 10;
    a[1] = 3;
    cout << "a[0]*a[1]的值: " << endl;
    cout << *(a+0)* *(a+1) << endl;         //指標相乘

    delete[] a;
    cout << "查看刪除後的動態配置" << endl;
    cout << *a << " " << *(a+1);            //查看刪除後的動態配置


    //system("pause");
    return 0;
}

//第十章 牛刀小試 第四題 使用動態配置進行陣列中的整數相乘
/* output

30
查看刪除後的動態配置
0 0%              
                                                                                                   
*/