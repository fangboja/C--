#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int num=0;
    int money=0;
    int deposit=0;
    while(deposit<30000)
    {
    	num++;
    	cout<<"第"<<num<<"個月存款為";
		cin>>money;
		deposit+=money; 
	}
	cout<<"恭喜你存到"<<deposit<<"元"<<"達成目標"<<endl; 
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

