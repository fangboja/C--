#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int score=0;
    cout<<"請輸入成績(0~100)";
    cin>>score;
    if(score>=90){
    	cout<<"優等"<<endl;
	}
	else if(score<90 && score>=80){
		cout<<"甲等"<<endl;
	}
	else if(score<80 && score>=70){
		cout<<"乙等"<<endl;
	}
	else if(score<70 && score>=60){
		cout<<"丙等"<<endl;
	}
	else{
		cout<<"丁等"<<endl; 
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

