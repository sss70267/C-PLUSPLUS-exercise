#include <iostream>   
#include <cstdlib>
using namespace std;
int main(void)
{
    try
    {
        for(int i=0;i<=10;i++)
        {
            if(i*5.0>16.0)  
                throw (double)i*5.0; 
            else
                cout << i << "*5=" << i*5.0 << endl;
        }
    }
    catch(const double i)                     
    {
        cout << i/5.0 << "*5=" << i << "大於16了" << endl;
    }    
    system("pause");
    return 0;
}


/* 牛刀小試 第十九章 第3題   

習3
i*5大於16時拋出 double型態的數值i*5在catch印出值

--------------output---------------

0*5=0
1*5=5
2*5=10
3*5=15
4*5=20大於16了

*/