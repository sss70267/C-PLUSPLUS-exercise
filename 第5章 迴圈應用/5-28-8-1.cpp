#include<iostream>
#include<cstdlib>

using namespace std;

int main(void)
{
	int month;
	cout << "輸入月份1~12" << endl;
	cin >> month;
	if(month >=3 && month <=5)
		cout << "春天" << endl;
	if(month >=6 && month <=8)
		cout << "夏天" << endl;
	if(month >=9 && month <= 11)
		cout << "秋天" << endl;
	if(month==12 || month==1 || month==2 )
		cout << "冬天" << endl;
	else 
		cout <<"不存在"<<endl; 
	
	system("pause");
	return 0;
 	
 }       
