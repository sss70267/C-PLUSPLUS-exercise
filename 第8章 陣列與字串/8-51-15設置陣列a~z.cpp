#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    
    char word[26];
    cout << "印出英文單字" << endl;

    for(int i=0;i<26;i++)
    {
        word[i]=char(i+65);
        cout << word[i] << " ";
    }
    cout << endl;

    //system("pause");
    return 0;

}




//第八章 牛刀小試 第十五題  設置陣列值為:A~Z
/* output

印出英文單字
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 

*/