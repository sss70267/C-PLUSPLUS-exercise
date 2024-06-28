#include<iostream>
#include<cstdlib>
using namespace std;

void square(double *);

int main(void)
{
    double a[]={2,3,4,5,6,7,8,9};
    cout << "陣列為:";
    for(int i=0;i<8;i++)
        cout << a[i]<< " ";
    cout << endl;
    square(a);
    cout << "平方後結果:";
    for(int i=0;i<8;i++)
        cout << *(a+i)<<" ";


    //system("pause");
    return 0;
}

void square(double *arr)
{
    for(int i=0;i<8;i++)
        *(arr+i) = (*(arr+i)) * (*(arr+i));

    return;
}


//第九章 牛刀小試 第十五題 使用指標 把陣列每個數字乘以平方
/* output

陣列為:2 3 4 5 6 7 8 9 
平方後結果:4 9 16 25 36 49 64 81 

*/