#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
			cout <<i;
		cout<<endl;
	}
	system("pause");
	return 0;
}
