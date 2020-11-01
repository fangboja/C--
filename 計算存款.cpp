#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int math=0;
    float a=0;
    string str;
    cout<<"顯示================================\n";
    cout<<"請輸入您的存款:";
    cin>>math;
    if(math>=1000000)
    {
		str="A級會員";
		a=0.04;	
	}
	else if(math<=999999 && math>=500000)
	{
		a=0.02;
		str="B級會員";
	} 
	else
	{
		a=0.02;
		str="C級會員";
	}
	cout<<"您的利率是"<<a*100<<"%\n";
	cout<<"會員等級是"<<str<<endl;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

