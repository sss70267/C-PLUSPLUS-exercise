#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int month;
   cout << "輸入1~12:"; 
   cin >> month;  
   cout << "month=" << month << endl;
   switch(month)
   {
    	case 1:
      	case 2: cout << "寒假" << endl;
            break;
        
      	case 3: 
      	case 4:
      	case 6: cout << "下學期" << endl;
            break;
      	case 7:
    	case 8: cout << "暑假" << endl;
            break;
    	case 9:
    	case 10:
       	case 11:
        case 12: cout << "上學期" << endl;
            break;
      default:
            cout << "不存在" << endl;
   }

   system("pause");
   return 0;
}
/* p5-30 牛刀小試26題 月份判斷 */
