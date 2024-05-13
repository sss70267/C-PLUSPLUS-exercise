#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int nume[3][4]={
                    {1,3,4,2},
                    {4,11,3,22},
                    {5,22,31,21}};
    int min=nume[2][2];
    
    int a,b;
    int i,j;

    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            if(min>nume[i][j])
            {
                min=nume[i][j];
                a=i;
                b=j;
            }
    cout << "最小標註值為:";
    cout << "nume[" << a << "][" << b << "]" << endl;
    cout << "最小值為:";
    cout << min;
    


}

//第八章 牛刀小試 第六題 找出二維陣列中最小標註值
/* output

最小標註值為:nume[0][0]
最小值為:1%

*/