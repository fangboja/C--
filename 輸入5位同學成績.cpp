#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	int score=0,sum=0;
	cout<<"小王班上有五位同學，請你為小王設計一個輸入成績的程式";
	cout<<"，並且在輸入成績後顯示總成績與平均程績\n" ;
	cout<<"==========================================================================\n";
	
	cout<<"請輸入第一位同學成績:";
	cin>>score;
	
	cout<<"請輸入第二位同學成績:";
	cin>>score;
	
	cout<<"請輸入第三位同學成績:";
	cin>>score;
	
	cout<<"請輸入第四位同學成績:";
	cin>>score;
	
	cout<<"請輸入第五位同學成績:";
	cin>>score;
	
	sum=score+score+score+score+score;
	float average =(float)sum/5;
	printf("全班總成績為:%d",sum);
	printf("平均成績為:%.2f\n",average);
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

