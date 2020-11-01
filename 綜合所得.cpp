#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int money,money1=0;
    float a=0;
    cout<<"顯示================================="<<endl;
    cout<<"請輸入綜合所得淨額:";
    cin>>money;
    
    if(money<=540000)
	{
    	a=0.05;
    	money1=0;
	}
	else if(money<=1200000)
	{
    	a=0.1;
    	money1=36400;
	}
	else if(money<= 2420000)
	{
    	a=0.2;
    	money1=130000;
	}
	else if(money<=4530000)
	{
    	a=0.3;
    	money1=365000;
	}
	else
	{
		a=0.4;
		money1=805000;
	}
	cout<<"綜合所得淨額:"<<money<<endl;
	cout<<"稅額:"<<a*100<<"%\n";
	cout<<"稅金:"<<money*a<<endl;
	cout<<"累進差額"<<money1<<endl;
	cout<<"今年應納稅額:"<<(money*a)-money1<<endl; 
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

