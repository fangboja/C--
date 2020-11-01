#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int math=0;
	printf("請輸入數字:");
    cin>>math;
    if(math%2==0){
    	cout<<"輸入的數字"<<math<<"是偶數"<<endl; 
	}
	else{
		cout<<"輸入的數字"<<math<<"是積數"<<endl; 
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

