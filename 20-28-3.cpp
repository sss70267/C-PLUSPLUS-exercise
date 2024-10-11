#include <iostream>
#include <cstdlib>

namespace name1
{
    int var=5;
}

using namespace std;
int main(void)
{
    int var=10;
    {
        using namespace name1;
        cout << "in name1, var=" << var << endl;
    }

    system("pause");
    return 0;
}

/* 牛刀小試 第二十章 第3題   

習3

在main內使用using 呼叫name1中的var

--------------output---------------

in name1, var=10

*/


