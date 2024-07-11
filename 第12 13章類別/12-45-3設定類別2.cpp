#include<iostream>
#include<cstdlib>
using namespace std;

class my_data               //設定類別
{
    public:                 //公有成員
    // 資料成員
    int age;                
    int weight;

};


int main(void)
{
    my_data a;          //建立物件a

    //設定物件a成員
    a.age = 18;         
    a.weight = 57;

    //印出物件a資料成員的值
    cout << "age=" << a.age << endl;
    cout << "weight=" << a.weight << endl;

    system("pause");
    return 0;
}

/* 牛刀小試 第十二章 第三題 說明程式碼的意義

age=18
weight=57

*/