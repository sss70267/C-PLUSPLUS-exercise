#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

struct student_data
{
    string number;
    string name;
    int midterm;
    int final;
    int usually;
    float avg;

}student[3];

int main(void)
{
    int i;
    string seach_id;
    bool flag=false;
    //學生資料輸入
    for(i=0;i<3;i++)
    {
        cout << "輸入學生編號:";
        getline(cin,student[i].number);
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
    
    cout << "輸入欲查詢的學號:";
    getline(cin,seach_id);
    for(i=0;i<3;i++)
        if(seach_id==student[i].number)
        {
            cout << "學號:" << student[i].number << " ";
            cout << "姓名:" << student[i].name << " ";
            cout << "學期平均:" << student[i].avg << " ";
            flag =true;
        }
        if(flag==false)
            cout << "查無此資料:";




    //system("pause");
    return 0;
}

/* 牛刀小試 第十一章 第五題 修改第一題以結構輸入3筆學生資料 並可以查詢學號

輸入學生編號:1137
輸入學生姓名:鄭詠升一
輸入學生期中成績:90
輸入學生期末成績:100
輸入學生平時成績:100

輸入學生編號:1138
輸入學生姓名:鄭詠升二     
輸入學生期中成績:88
輸入學生期末成績:77
輸入學生平時成績:66

輸入學生編號:1139
輸入學生姓名:鄭詠升三
輸入學生期中成績:22
輸入學生期末成績:33
輸入學生平時成績:44

學生編號:1137
學生姓名:鄭詠升一
學生期中成績:90
學生期末成績:100
學生平時成績:100
學生學期平均:97

學生編號:1138
學生姓名:二
學生期中成績:88
學生期末成績:77
學生平時成績:66
學生學期平均:75.9

學生編號:1139
學生姓名:鄭詠升三
學生期中成績:22
學生期末成績:33
學生平時成績:44
學生學期平均:34.1

輸入欲查詢的學號:1137
學號:1137 姓名:鄭詠升一 學期平均:97 



*/