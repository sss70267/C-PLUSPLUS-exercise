#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義父類別CWin
{
    private:
        char id;
     
    public:     
        CWin(char i):id(i) {}
     
        char get_id()		        // get_id()函數，用來取得id成員
        {
            return id;
        }
};