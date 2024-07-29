#include<iostream>
#include<cstdlib>
using namespace std;

class Caaa
{
    private:
        int total;
        int *ptr;
    public:
        Caaa(int num):total(num)
        {
            cout << "呼叫建構元" << endl;
            ptr=new int[num];
            for(int i=0;i<total;i++)
                ptr[i]=i+1;
            cout << endl;
        }
        Caaa(const Caaa &win)
        {
            cout << "拷貝建構元" << endl;
            total=win.total;
            ptr=new int[win.total];
            for(int i=0;i<total;i++)
                ptr[i]=i+1;
            cout << endl;

        }
        ~Caaa()
        {
            cout << "刪除建構元" << endl;
            delete [] ptr;
        }
        void show()
        {   
            for(int i=0;i<total;i++)
                cout << "ptr["<< i << "]="<< this->ptr[i] << endl;
        }
};
void display(Caaa win)
{
    win.show();
}

int main(void)
{
    Caaa obj1(5);

    Caaa *ptr1 = new Caaa(3);
    cout << "印出數值" << endl;
    obj1.show();
    display(*ptr1);



    //system("pause");
    return 0;
}

/* 牛刀小試 第十四章 第十題 建立類別Caaa private int total,int *ptr
a.建構元 total設為num值,動態配置total個整數陣列,ptr指向陣列,並設置每高元素值
b.撰寫show函數成員,印出ptr指向的陣列值
c.撰寫拷貝元
d.撰寫解構元
-------------output----------------
呼叫建構元

呼叫建構元

印出數值
ptr[0]=1
ptr[1]=2
ptr[2]=3
ptr[3]=4
ptr[4]=5
拷貝建構元

ptr[0]=1
ptr[1]=2
ptr[2]=3
刪除建構元
刪除建構元
*/