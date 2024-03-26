#include<iostream>
#include<cstdlib>
using namespace std;

void print(void);
void print(int);

int main(void)
{
    print();
    cout << "--------------分隔線----------------" << endl;

    print(5);
    
    system("pause");
    return 0;

}

void print(void)
{
    string a ="two heads are better than one";
    cout << a << endl; 
    return ;
}

void print(int)
{
    for(int i=0;i<5;i++)
        print();
    return ;


}

// 第七章 牛刀小試 第七題 利用函數多載 print()沒有值時 印出字串 有int值時打印int值的字串int次