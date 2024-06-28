#include<iostream>
#include<cstdlib>
using namespace std;

int main(void)
{
    int a[2][5]={{3,5,6,23,15},{4,2,6,7,11}};
    int i1,j1;
    int i2,j2;
    int max=a[0][0];
    int min=a[0][0];

    int max_i,max_j,min_i,min_j;


    //找最大值
    for(i1=0;i1<2;i1++)
        for(j1=0;j1<5;j1++)
            if(max<*(*(a+i1)+j1))
            {
                max=*(*(a+i1)+j1);
                max_i=i1;
                max_j=j1;
            }
    //找最小值
    for(i2=0;i2<2;i2++)
        for(j2=0;j2<5;j2++)
            if(min>*(*(a+i2)+j2))
            {
                min=*(*(a+i2)+j2);
                min_i=i2;
                min_j=j2;
            }
    //印出最小最大值
    cout << "最大值為:*(*(a+"<< max_i <<")" << max_j <<")=" << *(*(a+0)+3) << endl;
    cout << "最小值為:*(*(a+"<< min_i <<")" << min_j <<")=" << *(*(a+1)+1) << endl;

    //雙重指標相減
    cout << "*(*(a+"<< max_i <<")+" << max_j <<") - "  \
            "*(*(a+"<< min_i <<")+" << min_j <<") = " ;
    
    cout << *(*(a+0)+3) - *(*(a+1)+1);

    //system("pause");
    return 0;
}

//第十章 牛刀小試 第二題 使用雙重指標找最大最小值並相減
/* output

最大值為:*(*(a+0)3)=23
最小值為:*(*(a+1)1)=2
*(*(a+0)+3) - *(*(a+1)+1) = 21                                                                                                               

*/