#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i=0,sum=0;
	cout << "0~200�����ƪ�����:" ;
	while(i<=200)
	{
		if(i!=0 && i%2==0)
		{
			cout << i <<" ";
			sum+=i;
		}
		i++;
	}
	cout << "�`�X��:" << sum <<endl;
	system("pause");
	return 0; 
}

//���M�p�� P5-28 ��16�D  while�p�� 2+4+6+8....+200���`�M 
