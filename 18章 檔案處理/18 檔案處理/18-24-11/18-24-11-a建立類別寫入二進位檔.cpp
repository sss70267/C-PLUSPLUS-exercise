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
    student st[3];
    st[0].set_name_age();
    st[1].set_name_age();
    st[2].set_name_age();

    ofstream out_file("students.txt",ios::binary|ios::app);
    for(int i=0;i<3;i++)
    {
        out_file.write((char *)&st[i],sizeof(st[i]));
        cout << "students[" << i << "]" << "已寫入檔案" << endl;
    }

    out_file.close();
    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第11題-a

建立類別,建立3個類別物件並寫入二進位檔案

---------------output-------------
輸入姓名:鄭詠升  
輸入年齡:28
輸入姓名:邱禹寰
輸入年齡:27
輸入姓名:邱葵
輸入年齡:1
students[0]已寫入檔案
students[1]已寫入檔案
students[2]已寫入檔案

*/