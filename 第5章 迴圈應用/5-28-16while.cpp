#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i=0,sum=0;
	cout << "0~200案计案计:" ;
	while(i<=200)
	{
		if(i!=0 && i%2==0)
		{
			cout << i <<" ";
			sum+=i;
		}
		i++;
	}
	cout << "羆:" << sum <<endl;
	system("pause");
	return 0; 
}

//刚 P5-28 材16肈  while璸衡 2+4+6+8....+200ぇ羆㎝ 
