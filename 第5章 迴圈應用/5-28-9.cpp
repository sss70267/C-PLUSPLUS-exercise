#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int amount;
	float pay =(float)amount;
	cout <<"輸入購物金額:" <<endl;
	cin >> amount;
	cout << "今日購物" << amount << "元" << endl; 
	
	if(amount>=1000 && amount<3000)
		pay=amount*0.95f;
	else if(amount>=5000 && amount<5000)
		pay=amount*0.92f;
	else if(amount>=5000 && amount<10000)
		pay=amount*0.9f;
	else if(amount>=10000)
		pay=amount*0.85f;
		
	cout <<"折扣後價格:"<< pay << endl; 
	
	system("pause");
	return 0;
}
