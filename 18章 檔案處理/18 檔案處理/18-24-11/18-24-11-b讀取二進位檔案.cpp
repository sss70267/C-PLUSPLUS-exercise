#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

class student
{
    protected:
        char name[40];
        int age;
    public:
        void set_name_age()
        {
            cout << "輸入姓名:";
            cin >> name;
            cout << "輸入年齡:";
            cin >> age;
        }
        void show_name_age()
        {
            cout << "姓名:" << name << endl;
            cout << "年齡:" << age << endl;
        }
};

int main(void)
{
    student st;
    ifstream in_file("students.txt",ios::binary);
    if(in_file.is_open())
    {
        in_file.read((char *)&st,sizeof(st));
            while (!in_file.eof())
            {
                st.show_name_age();
                in_file.read((char *)&st,sizeof(st));
            }
            cout << "二進位檔案已被讀取" << endl;
    }
    else 
        cout << "檔案開啟失敗" << endl;


    in_file.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第11題-b

承上題 讀取前一提的檔案內容

---------------output---------------
姓名:鄭詠升
年齡:28
姓名:邱禹寰
年齡:27
姓名:邱葵
年齡:1
二進位檔案已被讀取
*/