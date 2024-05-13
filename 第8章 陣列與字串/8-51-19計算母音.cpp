#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int main(void)
{
    string str;
    int A=0,E=0,I=0,U=0,O=0,other=0;
    int i=0;
    
    cout << "輸入字串內容:" << endl;
    getline(cin,str);
    cout << "字串內容為:" << str << endl;

    while(str[i]!='\0')
    {
        switch(str[i])
        {
            case 'A':
            case 'a':   A+=1;
                        break;
            case 'E':
            case 'e':   E+=1;
                        break; 

            case 'I':
            case 'i':   I+=1;
                        break;

            case 'U':
            case 'u':   U+=1;
                        break;

            case 'O':
            case 'o':   O+=1;
                        break;   
            default : other+=1;        
        }
        i++;
    }

    cout << "各母音出現的次數" << endl;
    cout << "A,a出現次數為:" << A << endl;
    cout << "E,e出現次數為:" << E << endl;
    cout << "I,i出現次數為:" << I << endl;
    cout << "U,u出現次數為:" << U << endl;
    cout << "O,o出現次數為:" << O << endl;
    cout << "其他字元出現次數:" << other << endl;


    //system("pause");
    return 0;

}

//第八章 牛刀小試 第十九題  計算 a i u e o  母音及其他音出現的次數
/* output

輸入字串內容:
i love python
字串內容為:i love python
各母音出現的次數
A,a出現次數為:0
E,e出現次數為:1
I,i出現次數為:1
U,u出現次數為:0
O,o出現次數為:2
其他字元出現次數:9

*/