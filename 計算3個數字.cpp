#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int math1=0,math2=0,math3=0,sum=0,a;
    cout<<"請輸入三個數字";
	cin>>math1;
	cin>>math2;
	cin>>math3;
	
	sum=math1+math2+math3;
	a=math1*math2*math3;
	float average=(float)sum/3;
	
	printf("三數總和:%d\n",sum);
	printf("三數積:%d\n",a);
	printf("三數總和:%.1f\n",average);
	
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

