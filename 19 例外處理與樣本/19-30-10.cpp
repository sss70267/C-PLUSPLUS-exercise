#include<iostream>
#include<cstdlib>
using namespace std;

template<class T,int n>
class CArray
{
    protected:
        T arr[n];
    public:
        CArray()
        {
            for(int i=0;i<n;i++)
                arr[i]=0;
        };
        void set_data();
        void show_data();
};
template<class T,int n>
void CArray<T,n>::set_data()
{
    for(int i=0;i<n;i++)
    {
        cout << "輸入arr[" << i << "]=";
        cin >> arr[i];
    }
}
template<class T,int n>
void CArray<T,n>::show_data()
{
    for(int i=0;i<n;i++)
    {  
        cout << "arr[" << i << "]=" <<arr[i] << endl;
    }
}

int main(void)
{
    CArray<double,5> win1;
    win1.set_data();
    win1.show_data();
    

    system("pause");
    return 0;
}
/* 牛刀小試 第十九章 第10題   

習10
a.撰寫set_data.show_data 使set_data可以輸入資料到arr陣列裡

b.建立物件元素物件設定為5

c.使用show_data顯示輸入的資料


--------------output---------------

輸入arr[0]=19.1
輸入arr[1]=20
輸入arr[2]=39
輸入arr[3]=40.325
輸入arr[4]=22
arr[0]=19.1
arr[1]=20
arr[2]=39
arr[3]=40.325
arr[4]=22

*/