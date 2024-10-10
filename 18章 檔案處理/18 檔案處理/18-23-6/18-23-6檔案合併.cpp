#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
    ofstream a_file("aaa.txt",ios::out);          //建立aaa.txt檔案

    if(a_file.is_open())
    {
        a_file << "我是檔案a" << endl;
        a_file << "aaaa" << endl;
        cout << "aaa.txt寫入成功" << endl;
    }
    else
        cout << "寫入失敗" << endl;
    
    a_file.close();


    ofstream b_file("bbb.txt",ios::out);           //建立bbb.txt檔案

    if(b_file.is_open())
    {
        b_file << "我是檔案b" << endl;
        b_file << "bbbbb" << endl;
        cout << "bbb.txt寫入成功" << endl;
    }
    else
        cout << "寫入失敗" << endl;
    
    b_file.close(); 

    char txt[80],ch;
    ifstream a_file_r("aaa.txt",ios::in);       //讀取aaa.txt檔案
    ifstream b_file_r("bbb.txt",ios::in);       //讀去bbb.txt
    ofstream c_file("ccc.txt",ios::out);        //建立ccc.txt

    while(a_file_r.get(ch))                     //拷貝aaa.txt文字
        c_file.put(ch);                         //複製到ccc.txt
    cout << "aaa.txt拷貝完成" << endl;
    a_file_r.close();

    while(b_file_r.get(ch))                     //拷貝bbb.txt文字 
        c_file.put(ch);                         //複製到ccc.txt
    cout << "bbb.txt拷貝完成" << endl;
    b_file_r.close();
    c_file.close();

    
    cout << "讀取檔案ccc.txt" << endl;

    ifstream c_file_r("ccc.txt",ios::in);       //讀取拷貝完成的ccc.txt
    while(!c_file_r.eof())
    {
        c_file_r.getline(txt,80,'\n');
        cout << txt << endl;
    }
    c_file_r.close();

    system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第6題   

習6
合併檔案aaa.txt和bbb.txt的內容到ccc.txt

--------------output---------------

aaa.txt寫入成功
bbb.txt寫入成功
aaa.txt拷貝完成
bbb.txt拷貝完成
讀取檔案ccc.txt
我是檔案a
aaaa
我是檔案b
bbbbb

*/