#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(void)
{
    
    ifstream ifile("randint.dat",ios::binary);
    int rand_int,max=0;

    for(int i=1;i<=1000;i++)
    {
        ifile.read((char *)&rand_int ,sizeof(rand_int));
        cout << rand_int << endl;
        if(max<rand_int)
            max=rand_int;
    }
    cout << "最大值:" << max << endl;

    ifile.close();
    system("pause");
    return 0;
}
/* 牛刀小試 第十八章 第10題-b

承上題 讀取二進位檔案並找到最大值

--------------output---------------
省略 內容在randint.dat裡
......
......
......
......
1477
8435
2275
5814
9614
9620
2571
7817
3494
4321
1469
最大值:9991

*/