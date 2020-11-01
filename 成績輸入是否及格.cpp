#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int score=0;
    cout<<"請輸入成績";
    cin>>score;
    
    if(score>=60){
    	cout<<"及格\n";
	}
	else{
		cout<<"不及格\n"; 
	}
	cout<<"程式結束\n";
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

