#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==1 && i%5==3 && i%7==2) //3���@�_��l4 5���@�_��l3 7���@�_��l2 
			break;
	}
	cout << "�ߤl�ƶq�̤֬�:" << i << endl;
	
	system("pause");
	return 0;
}
//p5-30 ���M�p��24�D �p��ߤl�ƶq 

