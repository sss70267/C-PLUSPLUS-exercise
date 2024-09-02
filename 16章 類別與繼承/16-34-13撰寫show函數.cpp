#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    private:
        int num;
    public:
        Caaa()
        {
            num = 5;
        }
        void show()
        {
            cout << "num = " << num << endl;;
        }
        
};

class Cbbb : public Caaa
{
};

int main(void)
{
    Cbbb b;
    b.show();

    system("pause");
    return 0;
}

/* 牛刀小試 第十六章 第13題 

建立show()函數 使父類別 num值 可以被子類別建立的物件呼叫show()  

----------output----------
num = 5

*/