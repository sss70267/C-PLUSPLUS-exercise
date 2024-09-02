#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // 定義CWin類別，在此為父類別
{
    private:
        char id;
        int width,height;
     
    public:
        CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)  
        {
            cout << "CWin()建構元被呼叫了..." << endl;
        }
        void show_member(void)  	    // 成員函數，用來顯示資料成員的值
        {
            cout << "Window " << id << ": ";
            cout << "width=" << width << ", height=" << height << endl;
        }
};

class CTextWin : public CWin        // 定義CTextWin類別，繼承自CWin類別
{
    private:                  	    // 子類別裡的私有成員
        char *text,id;                 // char text[20] -> 改為 *text
        int width,height;
      
    public:     					    // 子類別裡的公有成員
        CTextWin(char *tx)     		// 子類別的建構元   x
        {
            cout << "CTextWin()建構元被呼叫了..." << endl; 
            text = new char[50];                //設定字串長度
            strcpy(text,tx);
        }
        void show_text()			    // 子類別的成員函數
        {
            cout << "text = " << text << endl;
        }
        ~CTextWin()
        {   
            cout << "呼叫~CTextWin解構元" << endl;
            delete [] text;
        }
        void set_text(char *tx)
        {
            delete [] text;             //釋放原先的記憶體
            text = new char[50];
            strcpy(text,tx);
        }
        void set_number(char i,char *tx)
        {
            id=i;
            delete [] text;
            strcpy(text,tx);
        }
};

int main(void)
{
    CWin win('A',50,60); 	   		// 建立父類別的物件
    CTextWin txt("Hello C++");		// 建立子類別的物件

    win.show_member();  			    // 以父類別物件呼叫父類別的函數
    txt.show_member();				// 以子類別物件呼叫父類別的函數
    txt.show_text();				    // 以子類別物件呼叫子類別的函數

    cout << "習題4" << endl;
    txt.set_text("i love python and c++");
    txt.show_text();

    cout << "習題5" << endl;
    txt.set_number('D',"i love python and c+++++");
    txt.show_member();
    txt.show_text();
    cout << "win 物件佔了 " << sizeof(win) << " bytes" << endl;
    cout << "txt 物件佔了 " << sizeof(txt) << " bytes" << endl; 
   
    //system("pause");
    return 0;
}

/* 牛刀小試 第十六章 第3、4、5題   
CTextWin的 text 指向串列指標(使用動態配置)
CTextWin 加入set_text函數 設定資料成員text所指向的字串
CTextWin 加入ㄓset_number 修改資料成員

CWin()建構元被呼叫了...
CWin()建構元被呼叫了...
CTextWin()建構元被呼叫了...
Window A: width=50, height=60
Window D: width=10, height=10
text = Hello C++
習題4
text = i love python and c++
習題5
Window D: width=10, height=10
text = i love python and c+++++
win 物件佔了 12 bytes
txt 物件佔了 40 bytes
呼叫~CTextWin解構元

*/