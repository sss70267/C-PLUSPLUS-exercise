#include<iostream>
#include<cstdlib>
using namespace std;

class Crectangle
{                    
    public:                 //不輸入預設為private 故不能從外部呼叫物件函數

    int width;
    int height;
       
};

int main(void)
{

    Crectangle rect1;
    rect1.width=15;
    rect1.height=10;                                    //原rect2.height 改為 recr1.height
    cout << "面積為:" << rect1.width*rect1.height;

    system("pause");
    return 0;
}
/*  牛刀小試 第十二章 第二題 修改錯誤的程式碼  
---------------------原題----------------------
#include<iostream>
#include<cstdlib>
using namespace std;

class Crectangle
{
    int width;
    int height;
    
};

int main(void)
{

    Crectangle rect1;
    rect1.width=15;
    rect2.height=10;
    cout << "面積為:" << rect1.width*rect1.height;

    system("pause");
    return 0;
}


------------------output-------------

面積為:150

*/