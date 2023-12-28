#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i;
	float length=3500;
	for(i=1;length>=3;i++)
	{
		length /= 2;
		cout << "第"<<i<<"天:"<<length<<endl;
		if(length<=float(3.0f))
			break;
	}	
	cout << "需要花費:"<< i <<"天才能小於3公尺" << endl; 
	
	system("pause");
	return 0;
}

//p5-30 牛刀小試 20題 3500公尺繩子 一天 /2 幾天才能小於3 
