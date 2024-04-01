#include<iostream>
#include<cstdlib>
using namespace std;


int main(int argc,char *argv[])
{
    int length = atoi(argv[1]);
    int width = atoi(argv[2]);
    cout << "平行四邊形長為:"  << length << endl;
    cout << "平行四邊形寬為:"  << width << endl;
    cout << "面積為:" << length*width << endl;

    system("pause");
    return 0;

}

// 第七章 牛刀小試 第二十一題 使用命令列引數 計算平行四邊形面積