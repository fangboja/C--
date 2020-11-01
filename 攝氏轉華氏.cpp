#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	float a=0,b=0;
	float temp=0;
    cout<<"設定攝氏溫度:";
    cin>>temp;
    cout<<"-----對應華氏，度數報告-----\n";
    
    printf("預定格式:%.6f\n",b=9.0/5.0*temp+32);
    printf("通用格式:%.2f\n",b=9.0/5.0*temp+32);
    printf("指定格:+%.1f\n",b=9.0/5.0*temp+32);
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

