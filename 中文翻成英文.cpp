#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int english=0;
    cout<<"1.您好嗎?"<<endl;
	cout<<"2.晚安"<<endl;
	cout<<"3.早安"<<endl;
	cout<<"請選擇中文的選項<1-3>:";
	cin>>english;
	
	switch(english)
	{
		case 1:
			cout<<"How are you?"<<endl;
			break;
		case 2:
			cout<<"good night"<<endl;
			break;
		case 3:
			cout<<"good moring"<<endl;
			break;
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

