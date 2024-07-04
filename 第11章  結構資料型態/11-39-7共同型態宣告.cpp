#include<iostream>
#include<cstdlib>
using namespace std;

union employee
{
    char soldier;
    char word;
}a;

struct employee_id
{
    char name[30];
    char id[10];
    char sex;
}employees;



int main(void)
{
    cout << "輸入姓名:" ;
    cin.getline(employees.name,30);
    cout << "輸入編號:" ;
    cin.get(employees.id,5);
    do
    {
        cout << "輸入性別(1)男性(2)女性 :";
        cin >> employees.sex;
        cin.get();
    } while ((employees.sex>'2')||(employees.sex<'1'));
    if(employees.sex=='1')
    {
        cout << "輸入(是)(否)完成兵役:";
        cin >> a.soldier;
        cin.get();
    }
    else
    {
        cout << "中文打字速度,輸入數字";
        cin >> a.word;
        cin.get();
    }
    
    if(employees.sex=='1')
    {
        cout << "姓名:" << employees.name << endl;
        cout << "編號:"<<employees.id << endl;
        cout << "是否服過兵役:" <<a.soldier;
    }
    else
    {
        cout << "姓名:" << employees.name << endl;
        cout << "編號:" << employees.id << endl;
        cout << "1分鐘中文打字速度:" <<a.word;
    }


    //system("pause");
    return 0;
}

/*  牛刀小試 第十一章 第七題 以共同空間填入個人資料

輸入姓名:zheng
輸入編號:1137
輸入性別(1)男性(2)女性 :1
輸入(是)(否)完成兵役:y
姓名:zheng
編號:1137
是否服過兵役:

*/