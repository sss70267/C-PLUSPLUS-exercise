#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,num;
   cout <<"��J�@�ӭ�:";
   cin >> num ;				//�T�w�ƭȧאּ�ۦ��J 
   
   bool flag=false;
   for(i=2;i<num;i++)
      if(num%i==0)
      {
         flag=true;
         break;
      }
   if(flag==false)
      cout << num << "�O���" << endl;
   else
      cout << num << "���O���" << endl;

   system("pause");
   return 0;
}
//p5-30 ���M�p�� 23�D ���R�ƭȬ���ƩΤ��O��� 
