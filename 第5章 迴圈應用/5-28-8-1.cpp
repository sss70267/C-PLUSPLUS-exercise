#include<iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	int month;
	cout << "��J���1~12" << endl;
	cin >> month;
	if(month >=3 && month <=5)
		cout << "�K��" << endl;
	if(month >=6 && month <=8)
		cout << "�L��" << endl;
	if(month >=9 && month <= 11)
		cout << "���" << endl;
	if(month==12 || month==1 || month==2 )
		cout << "�V��" << endl;
	else 
		cout <<"���s�b"<<endl; 
	
	system("pause");
	return 0;
 	
 }       
