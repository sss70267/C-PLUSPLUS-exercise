#include<iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	int month;
	cout << "��J���1~12" << endl;
	cin >> month;
	cout << month << "��O"; 
	switch(month) 
	{
		case 3:
		case 4:
		case 5:cout << "�K��" << endl;
			break;
		case 6:
		case 7:
		case 8:cout << "�L��" <<endl; 
			break;
		case 9:
		case 10:
		case 11:cout << "���" <<endl; 
			break;
		case 12:
		case 1:
		case 2:cout << "�V��" <<endl; 
			break;
		default:
			cout << "���s�b" <<endl; 
	
	}
	
	system("pause");
	return 0;
 	
 }       
