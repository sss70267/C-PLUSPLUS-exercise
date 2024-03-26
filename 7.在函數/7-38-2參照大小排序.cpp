#include<iostream>
#include<cstdlib>
using namespace std;

void sort(int &,int&);

int main(void)
{
    int a,b;
    cout << "輸入a值:" << endl;
    cin >> a;
    cout << "輸入b值:" << endl;
    cin >> b;
    sort(a,b);

    system("pause");
    return 0;
}

void sort(int &a,int &b)
{
    if(a<b)
        cout <<"b="<< b << " a=" << a;
    else 
        cout <<"a="<< a << " b=" << b;
    return;
}

//第七章 牛刀小試 第二題 將a b進行大小排序

