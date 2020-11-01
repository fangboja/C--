#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	int math1=0,math2=0,math3=0,sum=0;
    cout<<"請輸入英文成績";
    cin>>math1;
    
    cout<<"請輸入國文成績";
    cin>>math2;
    
    cout<<"請輸入數學成績";
    cin>>math3;
    
    sum=math1+math2+math3;
    float average = (float)sum/3;
    printf("總分為:%d",sum);
    printf("平均為:%.2f\n",average);
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

