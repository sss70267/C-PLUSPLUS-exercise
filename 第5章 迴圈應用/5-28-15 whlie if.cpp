#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int sum,i=0;
	cout <<"0~20������:"; 
	while(i<=20)
	{
		if(i%2==0 && i!=0)
		{
			cout << i <<" ";
			sum+= i*i;
		}
		i++;
	}
	cout << endl;
	cout << "0~20���ƪ������"<<sum <<endl;
	system("pause");
	return 0;
}

//���DP5-28���M�p�� �ϥ�while if �j��  
