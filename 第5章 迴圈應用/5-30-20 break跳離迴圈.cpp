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
		cout << "��"<<i<<"��:"<<length<<endl;
		if(length<=float(3.0f))
			break;
	}	
	cout << "�ݭn��O:"<< i <<"�Ѥ~��p��3����" << endl; 
	
	system("pause");
	return 0;
}

//p5-30 ���M�p�� 20�D 3500����÷�l �@�� /2 �X�Ѥ~��p��3 
