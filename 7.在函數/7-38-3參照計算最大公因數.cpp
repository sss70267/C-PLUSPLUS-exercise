#include<iostream>
#include<cstdlib>
using namespace std;

int gcd(int &, int &, int &);

int main(void)
{
    int a,b,g;
    cout << "輸入a值:" << endl;                      //原a=21 b=49 改成手動輸入 增加互動性
    cin >> a;
    cout << "輸入b值:" << endl;
    cin >> b;
    gcd(a,b,g);
    cout << "a,b最大公因數: "<<g;
    system("pause");
    return 0;
}

int gcd(int &a,int &b,int &g)
{
    for(int i=1;i<1000000;i++)                      //原為 g=a%b 本人認為無法計算其他數值隻公因數故而自行修改 且 優化原解答
        if(a%i==0 && b%i==0)
            g=i;

    return 1;
}
//第七章 牛刀小試 第三題 計算a b最大公因數 並傳送到g值