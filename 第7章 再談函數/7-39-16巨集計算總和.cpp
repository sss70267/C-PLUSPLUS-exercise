#include<iostream>
#include<cstdlib>
using namespace std;

#define sum(x,y) x+y

int main(void)
{

    cout << sum(10,5) << endl;
    cout << sum(4.5,3.6) << endl;

    system("pause");
    return 0;
}

// 第七章 牛刀小試 第十六題 define建立巨集 sum(x,y) x+y