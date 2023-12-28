#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
	int i=1,j=1;
	do{
		do{
			cout << i << "*" << j << "=" << i*j << "\t"; 
			j++;
		}while(j<=9);
		
		cout << endl;
		i++;
		j=1;  //1*9結束後 J值回到 1 重複 2*1~2*9以此類推 
	}while(i<=9);
	
	system("pause");
	return 0;
}
