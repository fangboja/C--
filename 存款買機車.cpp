#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int money=0;
    int a=0;
   	int sum=0;
    while(sum<30000)
    {
    	cout<<"請輸入第"<<a+1<<"個月份的存款";
    	cin>>money;
    	a+=1;
   		sum+=money;
	}
	cout<<"恭喜! 已經存夠了，存了"<<a<<"個月的總存款為:"<<sum<<endl;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

