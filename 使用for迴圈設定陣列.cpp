#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int score[5];//可以存入5比資料 
    int average=0.0;
    int sum=0;
    for(int i=1;i<=5;i++){ 
    	cout<<"第"<<i<<"位學生的成績";
    	cin>>score[i];
	}
	for(int i=1;i<=5;i++){
		sum+=score[i];
	}
	average=(double)(sum/5);
	cout<<"總分為"<<sum<<"平均為"<<average<<endl; 
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

