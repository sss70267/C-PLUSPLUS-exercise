#include<iostream>
#include<cstdlib>
using namespace std;

int max(int &,int &);

int main(void)
{
    int a,b;
    cout << "印出較大值" << endl;
    cout << "輸入a值:" << endl;
    cin >> a;
    cout << "印出b值:" << endl;
    cin >> b;
    
    cout << max(a,b);

    system("pause");
    return 0;

}


int max(int &a ,int &b)
{

    if(a<b)
        {
            cout << "b值較大為:";
            return b;
        }

    else
        {
            cout << "a值較大為:";
            return a;
        }

//牛刀小試 第七章 第五題 用參照比較a、b印出較大的值



}
