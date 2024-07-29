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
    cout << sizeof(obj) << endl;
    //system("pause");
    return 0;
}

/* 牛刀小試 第十四章 第三題 建立解構元和建構元
 
constructor
destructor called

*/
