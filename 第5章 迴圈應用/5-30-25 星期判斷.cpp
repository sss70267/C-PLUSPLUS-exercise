#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int month;
   cout << "��J1~12:"; 
   cin >> month;  
   cout << "month=" << month << endl;
   switch(month)
   {
    	case 1: cout << "�@��" << endl;
            break;
      	case 2: cout << "�G��" << endl;
            break;
      	case 3: cout << "�T��" << endl;
            break;
      	case 4: cout << "�|��" << endl;
            break;
      	case 5: cout << "����" << endl;
            break;
      	case 6: cout << "����" << endl;
            break;
      	case 7: cout << "�C��" << endl;
            break; 
    	case 8: cout << "�K��" << endl;
            break;
    	case 9: cout << "�E��" << endl;
            break;
    	case 10: cout << "�Q��" << endl;
            break;
       	case 11: cout << "�Q�@��" << endl;
            break; 
        case 12: cout << "�Q�G��" << endl;
            break;
      default:
            cout << "���s�b" << endl;
   }

   system("pause");
   return 0;
}
/* p5-30 ���M�p��25�D �P���@~��P�_ */
