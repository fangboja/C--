#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{	
	int num=0;
	int i=0;
	int a[3]={121,501,205};
	string b[]={"stu3","fang1","boja3"};
	for(i=0;i<3;i++){
		cout<<"請輸入中獎者的編號";
		cin>>num;
		if(num==a[0]){
			cout<<"中獎者的姓名為:"<<b[1];
			
			break;
		}
		else if(num!=a[1] && num!=a[2]){
			cout<<"查無此資料"<<endl;
			
		}
		
	}
	cout << "(共比對" << i+1 << "次)"<<endl; 
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

