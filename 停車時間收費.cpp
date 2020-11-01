#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int hour1,hour2,money,a,b=0;
    int minutes1,minutes2=0;
	cout<<"顯示\n";
    printf("請輸入進場時間");
    scanf("%d%d",&hour1,&minutes1);
    printf("請輸入出場時間");
   	scanf("%d%d",&hour2,&minutes2);
    
    a=(minutes2-minutes1)+((hour2-hour1)*60);
    b=a/30;
	 
    if(b<=120)
    {
		money=b*30;
	}
	else if(b>120 && b<240)
	{
		money=b*40;
	}
    else if(b>240)
    {
    	money=b*60;
	}
	else if(b<30)
	{
		money=0;
	}
	
	cout<<"進場時間是"<<hour1<<"-"<<minutes1<<endl;
    cout<<"出場時間是"<<hour2<<"-"<<minutes2<<endl;
    cout<<"停車的總分數"<<a<<endl;
    cout<<"停車的總費用是"<<money<<endl;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

