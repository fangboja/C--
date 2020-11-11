#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int tmp;
	int array[5]={20,45,98,23,85};
    cout<<"排順序前"<<endl;
    for(int i=0;i<5;i++){
     cout<<array[i]<<" "<<endl;
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(array[i]>array[j]){
				tmp=array[i];
				array[i]=array[j];
				array[j]=tmp;
			}	
		}
	}
	cout<<"排順序後"<<endl;
	for (int i=0; i<5; i++){
			cout << array[i] << " "<<endl;
		}

	
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

