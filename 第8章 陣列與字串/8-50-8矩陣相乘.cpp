#include<iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
    int a[][3]={{3,2,1},{5,6,7},{2,4,6}};
    int b[][2]={{2,3},{3,4},{6,2}};
    int c[][2]={{0,0},{0,0},{0,0}};

    int i,j,k;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<2;k++)
                   c[i][k] += a[i][j]*b[j][k];
    
    for(i=0;i<3;i++)
        for(j=0;j<2;j++)
        {   
            cout << "c[" << i <<"][" << j << "]=" ;
            cout << c[i][j] << endl;
        }

    system("pause");
    return 0;
}


//第八章 牛刀小試 第八題 計算二維陣列相乘
/* output

c[0][0]=18
c[0][1]=19
c[1][0]=70
c[1][1]=53
c[2][0]=52
c[2][1]=34

*/