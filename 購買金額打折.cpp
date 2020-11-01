#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int money=0,moneyprice=0;
    cout<<"輸入金額";
    cin>>money;
    if(money>=100000){
    	moneyprice=money*0.8;
	}
	else if(money<=100000 && money>=50000){
			moneyprice=money*0.85;
	}
	else if(money<=50000 && money>=30000){
			moneyprice=money*0.9;
	} 
	else if(money<=30000 && money>=10000){
			moneyprice=money*0.95;
	} 
	else{
		moneyprice=money;
	}
	cout<<moneyprice<<endl;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

