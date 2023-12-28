#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int num,i=1,sum=0; 
	
	
	do{
		cout << "input int:";	
		cin >> num;
	}while(num<1 || num%2==0);
	
	do{
		sum += i;
		i+=2;
	}while(i<=num);
	
	cout << "1+3...." << num << "=" << sum << endl;
	
	system("pause");
	return 0;
	
}
