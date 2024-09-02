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
    void show_num()                     //新增
    {
        cout << "num=" << num << endl;
    }
};

class Cbbb : public Caaa
{
};

int main(void)
{
    Cbbb obj1;
    obj1.show_num();

    system("pause");
    return 0;
}

/* 牛刀小試 第十六章 第11題   

新增函數show_num()在父類別,並讓子類別繼承建立物件呼叫show_num()

----------output----------
num=5

*/