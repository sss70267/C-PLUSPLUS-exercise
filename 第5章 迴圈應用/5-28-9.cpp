#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int amount;
	float pay =(float)amount;
	cout <<"��J�ʪ����B:" <<endl;
	cin >> amount;
	cout << "�����ʪ�" << amount << "��" << endl; 
	
	if(amount>=1000 && amount<3000)
		pay=amount*0.95f;
	else if(amount>=5000 && amount<5000)
		pay=amount*0.92f;
	else if(amount>=5000 && amount<10000)
		pay=amount*0.9f;
	else if(amount>=10000)
		pay=amount*0.85f;
		
	cout <<"�馩�����:"<< pay << endl; 
	
	system("pause");
	return 0;
}
