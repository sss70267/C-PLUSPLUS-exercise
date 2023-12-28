#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int sum,i=0;
	cout <<"0~20案计:"; 
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
	cout << "0~20案计キよ"<<sum <<endl;
	system("pause");
	return 0;
}

//策肈P5-28刚 ㄏノwhile if 癹伴  
