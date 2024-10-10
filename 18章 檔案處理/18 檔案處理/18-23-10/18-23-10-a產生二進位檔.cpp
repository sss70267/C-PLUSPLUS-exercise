#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main(void)
{
    
    ofstream ofile("randint.dat",ios::binary);
    int rand_int;

    for(int i=1;i<=1000;i++)
    {
        rand_int = rand()%(9999-1+1)+1;
        ofile.write((char *)&rand_int ,sizeof(rand_int));
    }
    cout << "已將資料寫入二位元檔案" << endl;

    ofile.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第10題-a

產生1000個1~9999的整數並寫入檔案中

--------------output---------------

已將資料寫入二位元檔案

*/