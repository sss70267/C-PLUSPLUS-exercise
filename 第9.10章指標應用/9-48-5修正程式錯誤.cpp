#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{                       //原程式碼
    double f;           //double f;
    double *prt;        //int *ptr;
    prt = &f;           // prt = f 

    cout << "prt指標位址: " << prt << endl;

    system("pause");
    return 0;
}


//第九章 牛刀小試 第五題 修正程式碼錯誤
/* output

prt指標位址: 0x16b563210


*/