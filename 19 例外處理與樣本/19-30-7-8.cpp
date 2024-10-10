#include <iostream>   
#include <cstdlib>
using namespace std;
template<class T>
class CWin
{
    protected:
        T width,height;
    public:
        CWin(T ,T);

        void show()
        {
            cout << "width=" << width << ',';
            cout << "height=" << height << endl;

        }
};
template<class T>
CWin<T>::CWin(T w,T h)
{
    width=w;
    height=h;
}

int main(void)
{
    CWin<int> win1(50,50);
    CWin<double> win2(40.2,50.3);

    cout << "win1 object: ";
    win1.show();
    cout << "win2 boject: ";
    win2.show();

    system("pause");
    return 0;
}

/* 牛刀小試 第十九章 第7 8題   

習7
把建構元移至類別外定義
習8
函數show定義在類別內


--------------output---------------

win1 object: width=50,height=50
win2 boject: width=40.2,height=50.3

*/
