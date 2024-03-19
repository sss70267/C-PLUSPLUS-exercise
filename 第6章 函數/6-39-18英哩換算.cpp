#include<iostream>
#include<cstdlib>
using namespace std;

double miles(void);

int main(void)
{
    miles();

    system("pause");
    return 0;
}

static int km=30;

double miles(void)
{
    int i;
    float a=1.6f;
    for(i=10;i<=km;i+=5)
        cout << i << "公里="<< i*a << "英里" << endl;
    return 0;
}

//牛刀小試 第六章 第十八題 利用靜態外部變數 轉換英哩