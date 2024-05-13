#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int list1[2][2][2]={{{4,1},
                        {5,11}},
                        {{5,12},
                        {3,14}}};     //三維陣列

    int i,j,k,sum=0;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            for (k=0;k<2;k++)
                sum +=list1[i][j][k];               //內巢迴圈

    cout << "list1[2][2][2] = " << sum << endl;

    system("pause");
    return 0;
}

//第八章 牛刀小試 第七題 計三維陣列的總和
/* output

list1[2][2][2] = 55

*/