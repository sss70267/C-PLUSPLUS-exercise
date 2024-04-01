#include<iostream>
#include<cstdlib>
using namespace std;
 

int main(int argc,char *argv[])
{
    cout << "input value:" << argc << endl;
    double x=atoi(argv[1]);
    int n=atoi(argv[2]);
    double sum=1;
    for(int i=0;i<n;i++)
        sum*=x;

    cout << "x^n=" << sum << endl;
    
    system("pause");
    return 0;

}
// 第七章 牛刀小試 第二十二題 使用命令列引數 計算x^n