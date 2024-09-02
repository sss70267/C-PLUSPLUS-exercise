#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    protected:
        int num;
    public:
        Caaa()              //預設建構元
        {
            num = 5;
        }

};

class Cbbb : public Caaa
{
    public:
        void show_num()                    
        {
            cout << "num=" << num << endl;
        }
};

int main(void)
{
    Cbbb obj1;
    obj1.show_num();

    system("pause");
    return 0;
}

/* 牛刀小試 第十六章 第12題   

新增函數show_num()在子類別,並印出

----------output----------
num=5

*/