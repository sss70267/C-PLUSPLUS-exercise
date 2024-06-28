#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{


    int a[10],b=3,*ptr1=a,*ptr2=&b,i;

    for(i=0;i<10;i++)
        cout << "陣列 a[" << i <<"]的位址=" << (ptr1+i) << endl;

        cout << "變數b的位址:" << ptr2 << endl;



    system("pause");
    return 0;
}

//第九章 牛刀小試 第十四題 使用指標 查看陣列a與變數b的差異
/* output

陣列 a[0]的位址=0x16fdfb1e0
陣列 a[1]的位址=0x16fdfb1e4
陣列 a[2]的位址=0x16fdfb1e8
陣列 a[3]的位址=0x16fdfb1ec
陣列 a[4]的位址=0x16fdfb1f0
陣列 a[5]的位址=0x16fdfb1f4
陣列 a[6]的位址=0x16fdfb1f8
陣列 a[7]的位址=0x16fdfb1fc
陣列 a[8]的位址=0x16fdfb200
陣列 a[9]的位址=0x16fdfb204
變數b的位址:0x16fdfb1d8


*/