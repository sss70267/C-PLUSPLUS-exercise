#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    public:
        void display()
        {
            cout << "printed from Caaa class" << endl;
        }   
};

class Cbbb : public Caaa
{
    public:
        void display()
        {
            cout << "printed from Cbbb class" << endl;
        }

};

int main(void)
{
    Caaa obj1;
    Cbbb obj2;

    obj1.display();
    obj2.display();

    system("pause");
    return 0;
}

/* 牛刀小試 第十六章 第9.10題 

第21題
父類別建立display() 輸出 printed from Caaa class
子類別建立display() 出書 printed from Cbbb class
Caaa 建立物件 obj1 Cbbb建立物件 obj2 並呼叫display()

printed from Caaa class
printed from Cbbb class

*/