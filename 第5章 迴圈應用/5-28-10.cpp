#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int student1;
	cout <<"��J����:" <<endl;
	cin >> student1;
	
	if(student1<0 || student1>100)	
			cout << "���s�b����:"  << student1 << endl;
	
	else 
	{
		if(student1>0 && student1<60)
				cout <<"���Ƭ�C��"<<endl; 
		if(student1>60 && student1<80)
				cout <<"���Ƭ�B��"<<endl; 
		if(student1>80 && student1<101)
				cout <<"���Ƭ�A��"<<endl; 
	
	} 

	
	system("pause");
	return 0;
}
