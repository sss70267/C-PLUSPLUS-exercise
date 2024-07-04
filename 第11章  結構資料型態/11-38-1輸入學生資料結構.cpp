#include<iostream>
#include<cstdlib>
using namespace std;

struct student_data
{
    char number[10];
    char name[30];
    int midterm;
    int final;
    int usually;
    float avg;

}student;

int main(void)
{
    //學生資料輸入
    cout << "輸入學生編號:";
    cin >> student.number;
    cin.get();
    cout << "輸入學生姓名:";
    cin.getline(student.name,30);
    cout << "輸入學生期中成績:";
    cin >> student.midterm;
    cout << "輸入學生期末成績:";
    cin >> student.final;
    cout << "輸入學生平時成績:";
    cin >> student.usually;
    student.avg=student.midterm*0.3+student.final*0.3+student.usually*0.4;

    cout << endl;
    //成績輸出
    cout << "學生編號:" <<student.number << endl;
    cout << "學生姓名:" <<student.name << endl;
    cout << "學生期中成績:" << student.midterm << endl; 
    cout << "學生期末成績:" << student.final << endl;;
    cout << "學生平時成績:" << student.usually << endl;
    cout << "學生學期平均:" << student.avg << endl;



    //system("pause");
    return 0;
}

/* 牛刀小試 第十一章 第一題 以結構輸入學生資料

輸入學生編號:1137
輸入學生姓名:zheng yung sheng
輸入學生期中成績:100
輸入學生期末成績:89
輸入學生平時成績:97

學生編號:1137
學生姓名:zheng yung sheng
學生期中成績:100
學生期末成績:89
學生平時成績:97
學生學期平均:95.5





*/