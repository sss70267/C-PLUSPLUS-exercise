#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    public:
        Caaa();
        ~Caaa();

};

Caaa::Caaa()
{
    cout << "constructor" << endl;
}
Caaa::~Caaa()
{
    cout << "destructor called" << endl;
}


int main(void)
{
    Caaa obj;
    Caaa *ptr;
    ptr = new Caaa();
    cout << sizeof(obj) << endl;
    cout << sizeof(ptr) << endl;
    delete ptr;
    //system("pause");
    return 0;
}

/* 牛刀小試 第十四章 第六題 obj使用動態方式配置記憶體
 
1
8
destructor called
destructor called

*/
