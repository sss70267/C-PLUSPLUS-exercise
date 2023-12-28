#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%7==0 && i%4==0)
			cout << i << ",";
	}
	cout <<"可被4,7整除"<<endl; 
	system("pause");
	return 0;
}
