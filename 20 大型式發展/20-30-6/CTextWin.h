#include <iostream>
#include "CWin.h"
using namespace std;

class CTextWin : public CWin    // 定義子類別CTextWin
{
    private:
        char text[20];
      
    public:
        CTextWin(char i,char *tx):CWin(i)
        {
            strcpy(text,tx);
        }
        void show()
        {
            cout << "Window " << get_id() << ": ";       // 呼叫父類別裡的get_id()
            cout << "text = " << text << endl;
        }
};