#include<iostream>
#include<cstdlib>
#include<string>
#include<iomanip>
using namespace std;

int main(void)
{  
    int i;
    int score[5]={0};
    double sum = 0.0f;
    string students[5] = {"Richard","Amy Lee","Paul Yang","Mary Wang","Jean Fen"};
    
    for(i=0;i<5;i++)
    {
        cout << students[i] << "的分數為:";
        cin >> score[i];
    }
    cout << endl;

    for(i=0;i<5;i++)
        cout << students[i] << "    ";
    cout << endl;

    for(i=0;i<5;i++)
    {
        cout << "  " << setw(1) << score[i] << "        ";
        sum+=score[i];
    }
    cout << endl << endl;

    cout << "平均分數為:" << sum/5 << endl;


    //system("pause");
    return 0;
}

//第八章 牛刀小試 第二十七題    輸入成績計算平均值 設置字串寬度
/* output

Richard的分數為:88
Amy Lee的分數為:93
Paul Yang的分數為:63
Mary Wang的分數為:27
Jean Fen的分數為:60

Richard    Amy Lee    Paul Yang    Mary Wang    Jean Fen    
  88          93          63          27          60        
  
平均分數為:66.2

*/