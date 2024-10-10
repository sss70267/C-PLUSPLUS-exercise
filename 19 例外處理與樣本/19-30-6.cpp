#include<iostream>
#include<cstdlib>
using namespace std;

template<class S,class I>
double times(S a,I b)
{
    return  a*b;
}

int main(void)
{
    cout << "times(3,4)=" << times<int,double>(3,4) << endl;
    cout << "times(4.5,5.5)" << times<double,float>(4.5,5.5) << endl;

    system("pause");
    return 0;
}

/* 牛刀小試 第十九章 第6題   

習6
利用樣板設計函數多載a*b並計算,使a,b為不同型態.


--------------output---------------

times(3,4)=12
times(4.5,5.5)24.75

*/