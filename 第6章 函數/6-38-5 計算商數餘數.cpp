#include<iostream>
#include<cstdlib>
using namespace std;
void mod(int,int);

int main(void)
{
    int x,y;
    cout << "輸入x值" << endl;
    cin >> x;
    cout << "輸入y值" << endl;
    cin >> y;

    mod(x,y); 
}

void mod(int a,int b)
{
    int quotient,remainder;
    quotient = a/b;
    remainder = a%b;

    cout << a << "/" << b << "=" << quotient << endl;
    cout << a << "%" << b << "=" << remainder << endl;
    cout << "商數為:" << quotient << endl;
    cout << "餘數為:" << remainder << endl;
}
//牛刀小試 第六章 第五題 計算商數及餘數