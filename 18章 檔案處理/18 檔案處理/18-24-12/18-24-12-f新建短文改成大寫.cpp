#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cctype>
using namespace std;

int main(void)
{
    char ch;
    ifstream in_file("Atlanta.txt",ios::in);
    ofstream out_file("UpAtlanta.txt",ios::out);
    

    while(in_file.get(ch))
        out_file.put(toupper(ch)); 

    cout << "建立檔案UpAtlanta.txt" << endl;

    in_file.close();
    out_file.close();

    char txt[1000];
    ifstream read_file("lowAtlanta.txt",ios::in);

    if(read_file.is_open())
    {
        while(!read_file.eof())
        {
            read_file.getline(txt,1000,'\n');
            cout << txt << endl;
        }
    }
    read_file.close();
    //system("pause");
    return 0;
}

/* 牛刀小試 第十八章 第12題-f

短文改成大寫

--------------output---------------

建立檔案UpAtlanta.txt
atlanta is considered one of the cradles of the civil rights movement. martin luther king jr. headed back to his native city in 1960. 
so how fitting that the coaches headed to next weekend's final four will the most diverse group ever. oklahoma's kelvin sampson is native
american; mike davis of indiana is african-american and just the fifth black coach to guide a team to the final four. oregon's ernie kent 
could make it the first time with two african-american coach in the same final four.

*/