#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
#include<time.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int keyin;
    int sum=0;
    srand(time(NULL));
    int guess=rand()%100+1;
    cout<<"===========猜數字遊戲=================\n";
    do
	{
    cout<<"輸入數字範圍(1~100):";
	cin>>keyin;
	sum+=1;
		if(keyin>=1 && keyin<=100)
		{
			if(keyin==guess)
			{
			cout<<"猜對了\n";
			cout<<"第"<<sum<<"次" <<"猜對了\n";
			break; 
			}
			else if(keyin>guess)
			{
			cout<<"猜的數字比答案大"<<keyin-guess<<endl;
			cout<<"再輸入一次\n"; 
			}
			else if(keyin<guess)
			{
			cout<<"猜的數字比答案小"<<guess-keyin<<endl;
			cout<<"再輸入一次\n";
			}
		}
		else
		{
			cout<<"請輸入範圍內"<<endl;
			cout<<"再輸入一次\n";
		}
	}while(true);
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

