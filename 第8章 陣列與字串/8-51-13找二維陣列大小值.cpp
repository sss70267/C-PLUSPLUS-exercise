#include<iostream>
#include<cstdlib>
using namespace std;

void min_max(int [][3],int []);

int main(void)
{
    int i,j;
    int resule[2];                                          //存取函數最大最小值
    int array_2d[][3] =  {{32,42,12},{31,24,88},
                          {52,12,76},{61,251,72}};          //二維陣列

    cout << "二維陣列內容:" << endl;

    for(i=0;i<4;i++)                                        //印出陣列內容
    {    
        for(j=0;j<3;j++)
            cout << array_2d[i][j] << " ";
        cout << endl;
    }

    min_max(array_2d,resule);                               //執行函數
    cout << "max value:" << resule[0] << endl;
    cout << "min value:" << resule[1] << endl;


    //system("pause");
    return 0;
}

void min_max(int array_2d[][3],int b[2])
{
    int i,j;
    int max = array_2d[0][0],min = array_2d[0][0];

    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
        {
            if(array_2d[i][j]>max)                          //找陣列最大值
                max=array_2d[i][j];
            if(array_2d[i][j]<min)                          //找陣列最小值
                min=array_2d[i][j];
        }

    b[0]=max;
    b[1]=min;

    return;
}

//第八章 牛刀小試 第十三題  找出二維陣列最大最小值
/* output

二維陣列內容:
32 42 12 
31 24 88 
52 12 76 
61 251 72 
max value:251
min value:12

*/
