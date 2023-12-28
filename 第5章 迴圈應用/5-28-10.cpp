#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int student1;
	cout <<"块だ计:" <<endl;
	cin >> student1;
	
	if(student1<0 || student1>100)	
			cout << "ぃだ计:"  << student1 << endl;
	
	else 
	{
		if(student1>0 && student1<60)
				cout <<"だ计C"<<endl; 
		if(student1>60 && student1<80)
				cout <<"だ计B"<<endl; 
		if(student1>80 && student1<101)
				cout <<"だ计A"<<endl; 
	
	} 

	
	system("pause");
	return 0;
}
