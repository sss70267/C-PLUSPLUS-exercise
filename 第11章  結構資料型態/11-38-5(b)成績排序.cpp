#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
using namespace std;

struct student_data
{
    int number;
    string name;
    int midterm;
    int final;
    int usually;
    float avg;

}student[3];

bool cmp(student_data a, student_data b)
{
    return a.avg < b.avg;
}

int main(void)
{
    int i;
    string seach_id;
    //學生資料輸入
    for(i=0;i<3;i++)
    {
        cout << "輸入學生編號:";
        cin >> student[i].number;
        cin.get();
        cout << "輸入學生姓名:";
        getline(cin,student[i].name);
        cout << "輸入學生期中成績:";
        cin >> student[i].midterm;
        cout << "輸入學生期末成績:";
        cin >> student[i].final;
        cout << "輸入學生平時成績:";
        cin >> student[i].usually;
        cin.get();
        student[i].avg=student[i].midterm*0.3+student[i].final*0.3+student[i].usually*0.4;
        cout << endl;
    }
    //成績輸出
    for(i=0;i<3;i++)
    {
        cout << "學生編號:" <<student[i].number << endl;
        cout << "學生姓名:" <<student[i].name << endl;
        cout << "學生期中成績:" << student[i].midterm << endl; 
        cout << "學生期末成績:" << student[i].final << endl;;
        cout << "學生平時成績:" << student[i].usually << endl;
        cout << "學生學期平均:" << student[i].avg << endl;
        cout << endl;
    }
    sort(student,student+3,cmp);

    cout << "學號排序後:" << endl;
    for(i=0;i<3;i++)
    {
        cout << "學號:"<< student[i].number<< " ";
        cout << "姓名:"<<student[i].name << " ";
        cout << "學期平均" <<student[i].avg;
        cout << endl;
    }
    //system("pause");
    return 0;
}

/* 牛刀小試 第十一章 第五題(a)小題  修改第一題以結構輸入3筆學生資料 依照平均分數由小到大排序

輸入學生編號:1137
輸入學生姓名:1
輸入學生期中成績:77
輸入學生期末成績:66
輸入學生平時成績:77

輸入學生編號:1139
輸入學生姓名:2      
輸入學生期中成績:100
輸入學生期末成績:100
輸入學生平時成績:100

輸入學生編號:1188
輸入學生姓名:3     
輸入學生期中成績:88
輸入學生期末成績:77
輸入學生平時成績:66

學生編號:1137
學生姓名:鄭詠升1
學生期中成績:77
學生期末成績:66
學生平時成績:77
學生學期平均:73.7

學生編號:1139
學生姓名:2
學生期中成績:100
學生期末成績:100
學生平時成績:100
學生學期平均:100

學生編號:1188
學生姓名:3
學生期中成績:88
學生期末成績:77
學生平時成績:66
學生學期平均:75.9

分數排序後:
學號:1137 姓名:1 學期平均73.7
學號:1188 姓名:3 學期平均75.9
學號:1139 姓名:2 學期平均100

*/