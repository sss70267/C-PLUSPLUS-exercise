#include<iostream>
#include<cstdlib>
using namespace std;


int main(void)
{
    int i,j,sum[3]={0},sum1[5]={0};
    int maxs=sum[0];                    //最高銷售
    int maxp=sum1[0];                   //最高產品銷售 
    int s=0,p=0;                        //最高銷售、最高產品銷售最大值位置
    int sale[3][5]={{33,32,56,45,33},
                    {77,33,68,45,23},
                    {43,55,43,67,65}};
    int products[5]={12,16,10,14,15};   //產品價格

    for(i=0;i<3;i++)                                
    {
        cout << "銷售員" << i+1 << "的銷售量為";
        for(j=0;j<5;j++)
            cout << sale[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    cout << "第一題 計算銷售員總銷售" << endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
            sum[i]+=sale[i][j]*products[j];
        cout << "銷售員" << i+1 << "總銷售為:" << sum[i] << endl;
    }
    cout << endl;

    cout << "第二題 計算各產銷售" << endl;

    for(j=0;j<5;j++)
    {
        for(i=0;i<3;i++)
            sum1[j]+=sale[i][j]*products[j];
        cout << "產品" <<  char(j+65);                  //j+65 ascii編碼 A B C D E
        cout << "的銷售總額:" << sum1[j] << endl;
    }
    cout << endl;

    cout << "第三題 銷售最好的銷售員" << endl;
    for(i=0;i<3;i++)
        if(sum[i]>maxs)
        {
            maxs=sum[i];
            s=i;
        }
    cout << "銷售最高:銷售員" << s+1 << endl;
    cout << "銷售額為:" << maxs << "元" << endl;
    cout << endl;

    cout << "第四題 銷售最好的產品" << endl;
    for(j=0;j<5;j++)
        if(sum1[j]>maxp)
        {
            maxp=sum1[j];
            p=j;
        }
    cout << "最好的銷售產品為:產品" << char(p+65) << endl;
    cout << "銷售金額為:" << maxp << "元" <<endl;

}
//第八章 牛刀小試 第五題 計算銷售量及最高銷售額
/* output
銷售員1的銷售量為33 32 56 45 33 
銷售員2的銷售量為77 33 68 45 23 
銷售員3的銷售量為43 55 43 67 65 

第一題 計算銷售員總銷售
銷售員1總銷售為:2593
銷售員2總銷售為:3107
銷售員3總銷售為:3739

第二題 計算各產銷售
產品A的銷售總額:1836
產品B的銷售總額:1920
產品C的銷售總額:1670
產品D的銷售總額:2198
產品E的銷售總額:1815

第三題 銷售最好:銷售員
銷售最高:銷售員3
銷售額為:3739元

第四題 銷售最好的產品
最好的銷售產品為:產品D
銷售金額為:2198元
*/