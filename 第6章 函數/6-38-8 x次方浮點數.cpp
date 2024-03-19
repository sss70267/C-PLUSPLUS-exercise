#include<iostream>
#include<cstdlib>
using namespace std;
float power(float,int);

int main(void)
{
    float f;
    int i=2;

    cout << "輸入一個浮點數:" << endl;
    cin >> f;

    cout << f << "*" << i << "=";
    cout << power(f,i) << endl;

    system("pause");
    return 0;
}

float power(float a,int b)
{
    if(b==0)
        return 1;
    else
        return a*power(a,b-1);
}

//牛刀小試 第六章 第八題 輸入一個浮點數計算,浮點數的2次方