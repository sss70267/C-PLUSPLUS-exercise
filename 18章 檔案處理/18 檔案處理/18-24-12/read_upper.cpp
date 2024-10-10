#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

int main(void)
{
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

    //system("pause");
    return 0;
}
