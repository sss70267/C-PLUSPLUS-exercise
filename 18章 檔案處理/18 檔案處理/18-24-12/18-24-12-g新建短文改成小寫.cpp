#include<iostream>
#include<cstdlib>
#include<fstream>
#include<cctype>
using namespace std;

int main(void)
{
    char ch;
    ifstream in_file("Atlanta.txt",ios::in);
    ofstream out_file("lowAtlanta.txt",ios::out);
    

    while(in_file.get(ch))
        out_file.put(tolower(ch));

    cout << "建立檔案lowAtlanta.txt" << endl;
    in_file.close();
    out_file.close();

    char txt[1000];
    ifstream read_file("UpAtlanta.txt",ios::in);

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

/* 牛刀小試 第十八章 第12題-g

短文改成小寫

--------------output---------------

建立檔案lowAtlanta.txt
ATLANTA IS CONSIDERED ONE OF THE CRADLES OF THE CIVIL RIGHTS MOVEMENT. MARTIN LUTHER KING JR. 
HEADED BACK TO HIS NATIVE CITY IN 1960. SO HOW FITTING THAT THE COACHES HEADED TO NEXT WEEKEND'S FINAL FOUR WILL THE MOST DIVERSE GROUP EVER.
OKLAHOMA'S KELVIN SAMPSON IS NATIVE AMERICAN; MIKE DAVIS OF INDIANA IS AFRICAN-AMERICAN AND JUST THE FIFTH BLACK COACH TO GUIDE A TEAM TO 
THE FINAL FOUR. OREGON'S ERNIE KENT COULD MAKE IT THE FIRST TIME WITH TWO AFRICAN-AMERICAN COACH IN THE SAME FINAL FOUR.

*/