#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%18==0)
			cout << i <<"," ;
	}
	cout <<"可以被18整除"<<endl; 
	system("pause");
	return 0;
}
