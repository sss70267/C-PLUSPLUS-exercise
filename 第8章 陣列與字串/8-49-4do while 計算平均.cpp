#include<iostream>
#include<cstdlib>
using namespace std;

#define max 100
double age(double []);

int main(void)
{
    double score_age=0.0f;
    double score[max]={};

    score_age=age(score);
    cout << "班級平均分數為:" << score_age;

    //system("pause");
    return 0;
}

double age(double a[])
{
    int i=1,num,number;
    double sum=0.0f;

    do
    {
        if(i==101)
        {  
            cout << "輸入人數已滿100人" << endl;
            i++;
            break;
        }
        cout << "輸入第" << i <<"位成績:";
        cin >> a[i];
    }while(a[i++]>0);
    num=i-1;
    for(int k=0;k<num;k++)
    {   
        sum+=a[k];
        number=k;
    }
    return sum / number ;
}

//第八章 牛刀小試 第四題 用do-while計算平均數
/* output
輸入第1位成績:100
輸入第2位成績:90
輸入第3位成績:80
輸入第4位成績:70
輸入第5位成績:100
輸入第6位成績:-1
班級平均分數為:88
*/