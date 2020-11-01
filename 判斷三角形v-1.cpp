#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
#include <math.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int math1,math2,math3=0;
    int a,b=0;
    cout<<"顯示====================\n";
    cout<<"請輸入1邊的邊長:";
    cin>>math1;
    cout<<"請輸入另1邊的邊長:";
    cin>>math2;
    cout<<"請輸入斜邊的邊長:";
    cin>>math3;
    
    a=pow(math1,2)+(math2,2);
    b=pow(math3,2);//math3的2次方 
    if((math1+math2)<math3)
	{
    	cout<<"不是三角形\n";
	}
	else if(a==b)
	{
		cout<<"直角三角形\n";	
	}
	else if(a>b)
	{
		cout<<"鈍角三角形\n";	
	}
	else
	{
		cout<<"銳角三角形\n";
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

