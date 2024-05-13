#include<iostream>
#include<cstdlib>
using namespace std;

void minidx(int [][3]);

int main(void)
{   int a[3][3]={{21,85,39},{30,72,14},{69,53,41}};                 //二維陣列

    minidx(a);

    //system("pause");
    return 0;   
}

void minidx(int a[][3])
{
    int i,j;
    int min=a[0][0],mina1,mina2;
    
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(a[i][j]<min)
                {
                    min=a[i][j];
                    mina1=i;
                    mina2=j;
                }

    cout << "最小值為" << min << endl;
    cout << "最小值索引為:a[" << mina1 <<"][" << mina2 << "]" ;
    return;

}

//第八章 牛刀小試 第十一題 找出二維陣列最小值跟索引值
/* output

最小值為14
最小值索引為:a[1][2]% 

*/