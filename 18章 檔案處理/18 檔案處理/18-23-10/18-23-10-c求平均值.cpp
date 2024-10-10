#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(void)
{
    
    ifstream ifile("randint.dat",ios::binary);
    int rand_int,sum=0,count=0;
    double avg=0;

    for(int i=1;i<=1000;i++)
    {
        ifile.read((char *)&rand_int ,sizeof(rand_int));
        sum+=rand_int;
        count++;
    }
    avg = sum/(double)count;
    cout << "總和:" << sum << endl;;
    cout << "數字數量:" << count << endl;
    cout << "平均值:" << avg << endl;

    ifile.close();
    system("pause");
    return 0;
}
/* 牛刀小試 第十八章 第10題-c

承上題 讀取二進位檔案取得平均值

--------------output---------------

總和:5066580
數字數量:1000
平均值:5066.58

*/