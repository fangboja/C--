#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int num=0;
	cout<<"請輸入數字";
    cin>>num;
    for(int i=2;i<num;i++){
    	if(num%i==0 && num/i != 1){
			cout<<"不是質數"<<endl;
			break;
		}
		else{
		cout<<"是質數"<<endl;
		break;	
		}
		
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

