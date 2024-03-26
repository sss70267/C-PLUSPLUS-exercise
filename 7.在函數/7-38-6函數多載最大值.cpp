#include<iostream>
#include<cstdlib>
using namespace std;

int max(int &,int &,int &);
double max(double & ,double &,double &);

int main(void)
{
    double a,b,c;

    cout << "輸入a值:" << endl;
    cin >> a;

    cout << "輸入b值:" << endl;
    cin >> b;

    cout << "輸入c值:" << endl;
    cin >> c;

    cout << max(a,b,c);

    system("pause");
    return 0;
}

int max(int &a,int &b,int &c)
{
    if(a>b && a>c)
        {   
            cout << "a=";
            return a;
        }
    if(b>a && b>c)
        {
            cout << "b=";
            return b;
        }
    else
        {
            cout << "c=";
            return c;
        }
}

double max(double &a,double &b,double &c)
{
    if(a>b && a>c)
        {   
            cout << "a=";
            return a;
        }
    if(b>a && b>c)
        {
            cout << "b=";
            return b;
        }
    else
        {
            cout << "c=";
            return c;
        }
}


//牛刀小試 第七章 第六題 函數的多載建立兩個型態由輸入值判斷該執行哪種型態的函數