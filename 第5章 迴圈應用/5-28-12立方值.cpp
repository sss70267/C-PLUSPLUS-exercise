#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i,cubic,sum;
	for(i=1;i<=100;i++)
	{
		cubic = i*i*i;
		sum+=cubic;
	}
	cout <<"1~100¥ß¤è­È¬°:"<<sum<<endl; 
	system("pause");
	return 0;
}
