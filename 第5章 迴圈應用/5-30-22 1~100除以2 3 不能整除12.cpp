#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{   
	int i;
	for(i=1;i<101;i++)
	{
    	if(i%2==0 && i%3==0 && i%12!=0)
    			cout << i <<" ";
		   		continue;
	}
	cout << "���i�H���H2�B3����㰣12����"<<endl;
	system("pause");
	return 0;
}
//p-5-30 ���M�p��22�D 1~100 ��X�i�H���H 2�B3 ����㰣12���ƭ� 


