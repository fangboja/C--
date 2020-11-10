#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int a;//輸入的物品 
    int thing[a];//有多少物品就有多少筆資料
    int money=0;
    int sum=0;
	cout<<"請輸入物品數量";
	cin>>a;
	
	for(int i=1;i<=a;i++){
	cout<<"請輸入第"<<i<<"物品價格:";
	cin>>money;
	sum+=money;
	}
	cout<<"總共"<<sum<<"元"<<endl; 
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

