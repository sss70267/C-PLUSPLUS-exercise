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
	cout << "為可以除以2、3不能整除12的數"<<endl;
	system("pause");
	return 0;
}
//p-5-30 牛刀小試22題 1~100 找出可以除以 2、3 不能整除12的數值 


