#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%3==1 && i%5==3 && i%7==2) //3隻一起算餘4 5隻一起算餘3 7隻一起算餘2 
			break;
	}
	cout << "兔子數量最少為:" << i << endl;
	
	system("pause");
	return 0;
}
//p5-30 牛刀小試24題 計算兔子數量 

