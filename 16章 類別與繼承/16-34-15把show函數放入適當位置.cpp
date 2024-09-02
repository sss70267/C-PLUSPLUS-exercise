#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    protected:
        int num;
    public:
        Caaa()
        {
            num = 5;
        }

};

class Cbbb : protected Caaa
{
    public:
        void show()
        {
            cout << "num = " << num << endl;
        }
};

class Cccc : public Cbbb
{
    public:
        void prin()
        {
            cout << num;
        }
};

int main(void)
{
    Cccc c;
    
    c.show();
    system("pause");
    return 0;
}

/* 牛刀小試 第十六章 第15題 

把show()函數放置到適當的位置並用show()顯示出來

----------output----------
num = 5

*/
