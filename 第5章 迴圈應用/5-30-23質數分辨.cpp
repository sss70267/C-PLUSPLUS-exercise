#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,num;
   cout <<"輸入一個值:";
   cin >> num ;				//固定數值改為自行輸入 
   
   bool flag=false;
   for(i=2;i<num;i++)
      if(num%i==0)
      {
         flag=true;
         break;
      }
   if(flag==false)
      cout << num << "是質數" << endl;
   else
      cout << num << "不是質數" << endl;

   system("pause");
   return 0;
}
//p5-30 牛刀小試 23題 分析數值為質數或不是質數 
