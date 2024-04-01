#include<iostream>
#include<cstdlib>
using namespace std;

#define pi 3.1415926
#define volumn(r) (4/3)*pi*(r*r*r)

int main(void)
{
    for(int r=1;r<=5;r++)
        cout << "volumn(" << r << ")=" << volumn(r) << endl;

    system("pause");
    return 0;

}

// 第七章 牛刀小試 第十八題 定義巨集volumn(r)計算r=1~5之球體面積