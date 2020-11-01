#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int sum=0;
    int num=0;
    int score=0;
    do
	{
    	cout<<"第"<<num+1<<"位學生成績";
		cin>>score;
		if(score<0)
		{
			break;	
		}
		sum+=score;
		num+=1;	
	}while(true);
	cout<<sum<<endl;
	cout<<float(sum)/num<<endl;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

