#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int sum=0;
	for(int i=1;i<=100;i++){
    	if(i != 100){
    		sum+=i;
    		cout<<i<<"+";
    		continue;
		}
		sum+=i;
		cout<<i<<"="<<sum;	
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

