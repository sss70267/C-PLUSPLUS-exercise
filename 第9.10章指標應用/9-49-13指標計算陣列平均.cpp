#include<iostream>
#include<cstdlib>
using namespace std;



int main(void)
{
    int a[10],*ptr=a,i;
    double sum=0.0f;

    for(i=0;i<10;i++)
    {   
        cout << "輸入第" << i+1 << "個數字:";
        cin >> *(ptr+i);
        sum+=*(ptr+i);
    }

    cout << "平均數為:" << sum/(i) << endl;



    //system("pause");
    return 0;
}

//第九章 牛刀小試 第十三題 使用指標計算陣列a的平均值
/* output

輸入第1個數字:12
輸入第2個數字:41
輸入第3個數字:23
輸入第4個數字:45
輸入第5個數字:67
輸入第6個數字:93  
輸入第7個數字:54
輸入第8個數字:42
輸入第9個數字:43
輸入第10個數字:85
平均數為:50.5



*/