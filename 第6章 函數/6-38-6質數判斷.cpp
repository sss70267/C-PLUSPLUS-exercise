#include<iostream>
#include<cstdlib>
using namespace std;

bool primeQ(int);

int main(void)
{
    int integer;
    cout << "輸入一個整數:" << endl;
    cin >> integer;
    
    primeQ(integer);

    system("pause");
    return 0;

}

bool primeQ(int a)
{4

    int i;
    bool flag=false;
    for(i=2;i<a;i++)
        if(a%i==0)
            {
                flag=true;
                break;
            }

    if(flag==false)
    {
        cout << "是質數" << endl;
        return flag;
    }
    else
    {
        cout << "不是質數" << endl;
        return flag;
    }
}

//牛刀小試 第六章 第六題 質數判斷
