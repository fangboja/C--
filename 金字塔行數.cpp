#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	int math=0;
	cout<<"輸入金字塔行數:";
	cin>>math;
	int a;
	for(int i=1; i<=math;i++){
		for(int j=1; j<=i;j++){
			cout<<"#";	
		}
		cout<<"\n";	 
	}
	
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

