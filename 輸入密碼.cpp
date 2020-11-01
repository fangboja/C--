#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    string password;
    do
	{
		cout<<"請輸入密碼";
    	cin>>password;
	}
    while(password != "5678");
	cout<<"密碼輸入正確"<<endl; 
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

