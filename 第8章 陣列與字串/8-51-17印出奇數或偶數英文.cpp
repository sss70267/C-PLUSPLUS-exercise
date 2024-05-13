#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{

    char word[26];
    int i,choose;

    //設word值為 a~z
    for(i=0;i<26;i++)
    {
        word[i]=char(i+97);
        cout << word[i] << " ";
    }
    cout << endl;

    //位元選擇
    cout << "請輸入 整數1 為奇位數字元 整數2 為偶位數字元:" << endl;
    cin >> choose;

    if(choose%2==0)
        for(i=1;i<26;i+=2)
            cout << word[i] << " ";
    else
        for(i=0;i<26;i+=2)
            cout << word[i] << " ";
    cout << endl;

    //system("pause");
    return 0;
}

//第八章 牛刀小試 第十七題  選擇印出奇數或偶數字元的英文
/* output

請輸入 整數1 為奇位數字元 整數2 為偶位數字元:
2
b d f h j l n p r t v x z 

*/