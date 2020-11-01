#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int password=0;
	cout<<"請輸入密碼";
    cin>>password;
    if(password==1234){
    	cout<<"密碼正確!歡迎觀臨"<<endl;
		cout<<"程式結束"<<endl; 
	}
	else{
		cout<<"程式結束"<<endl;	
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

