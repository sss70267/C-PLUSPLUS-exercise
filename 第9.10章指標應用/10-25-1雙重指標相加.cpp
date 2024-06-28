#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int a[2][3]={{1,2,3},{3,4,5}};
    int b[2][3]={{3,4,5},{4,5,6}};
    int i,j,sum[2][3];
    
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            *(*(sum+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);

    cout << endl << "陣列 a + b =" << endl;
    for(i=0;i<2;i++)
   {
      for(j=0;j<3;j++)
         cout << *(*(sum+i)+j) << " ";
      cout << endl;
   }

    system("pause");
    return 0;
}

//第十章 牛刀小試 第一題 使用雙重指標計算兩個2*3陣列相加
/* output

陣列 a + b =
4 6 8 
7 9 11 

*/
