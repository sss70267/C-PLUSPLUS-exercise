#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int arr[2][4] = {{2,3,4,5},{6,7,8,9}};
    int i,j;

    //1.arr的值
    cout << "1.arr值=  " << arr << endl << endl;

    //2.arr[0] arr[1]的值
    cout << "2.arr[0]的值= " << arr[0] << "  arr[1]= " << arr[1] << endl << endl;

    //3.arr+1的值
    cout << "3.arr+1的值= " << arr+1 << endl << endl;    //指標方法 +1

    //4.arr[0]  arr[1]的值
    cout << "4." << endl;
    cout << "*(arr+0)的值= " <<*(arr+0) << endl;
    cout << "*(arr+1)的值= " <<*(arr+1) << endl << endl;

    //5.*(arr+1)+0 *(arr+1)+1 *(arr+1)+2 *(arr+1)+3的值
    cout << "5." << endl;
    cout << "*(arr+1)+0的值= " << *(arr+1)+0 << endl;
    cout << "*(arr+1)+1的值= " << *(arr+1)+1 << endl;
    cout << "*(arr+1)+2的值= " << *(arr+1)+2 << endl;
    cout << "*(arr+1)+3的值= " << *(arr+1)+3 << endl << endl;

    //6.*(*(arr+1)+0) *(*(arr+1)+1) *(*(arr+1)+2) *(*(arr+1)+3)的值
    cout << "6." << endl;
    cout << "*(*(arr+1)+0)的值= " << *(*(arr+1)+0) << endl;
    cout << "*(*(arr+1)+1)的值= " << *(*(arr+1)+1) << endl;
    cout << "*(*(arr+1)+2)的值= " << *(*(arr+1)+2) << endl;
    cout << "*(*(arr+1)+3)的值= " << *(*(arr+1)+3) << endl << endl;;

    //7.arr記憶體配置
    cout << "arr記憶體配置:" << endl;
    for(i=0;i<2;i++)
        for(j=0;j<4;j++)
        {
            cout << "*(arr+" << i << "+)" << j << "= " \
             << *(arr+i)+j << endl;
        }


    //system("pause");
    return 0;
}

//第十章 牛刀小試 第三題 使用雙重指標回答多項題目
/* output

1.arr值=  0x16bbfb1f0

2.arr[0]的值= 0x16bbfb1f0  arr[1]= 0x16bbfb200

3.arr+1的值= 0x16bbfb200

4.
*(arr+0)的值= 0x16bbfb1f0
*(arr+1)的值= 0x16bbfb200

5.
*(arr+1)+0的值= 0x16bbfb200
*(arr+1)+1的值= 0x16bbfb204
*(arr+1)+2的值= 0x16bbfb208
*(arr+1)+3的值= 0x16bbfb20c

6.
*(*(arr+1)+0)的值= 6
*(*(arr+1)+1)的值= 7
*(*(arr+1)+2)的值= 8
*(*(arr+1)+3)的值= 9

arr記憶體配置:
*(arr+0+)0= 0x16bbfb1f0
*(arr+0+)1= 0x16bbfb1f4
*(arr+0+)2= 0x16bbfb1f8
*(arr+0+)3= 0x16bbfb1fc
*(arr+1+)0= 0x16bbfb200
*(arr+1+)1= 0x16bbfb204
*(arr+1+)2= 0x16bbfb208
*(arr+1+)3= 0x16bbfb20c                                                                                                           

*/