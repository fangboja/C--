#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{	
	int a[]={1,50,20,6,30};
	int totalsize=sizeof(a);
	int onesize=sizeof(a[0]);
	int b=totalsize/onesize;
	cout<<"陣列的大小為:"<<totalsize<<",一個元素的大小是"<<onesize;
	cout<<",陣列的數量是"<<b<<endl;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

