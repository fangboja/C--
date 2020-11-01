#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int scores[3];
    scores[0]=70;
    scores[1]=80;
    scores[2]=90;
    cout<<scores[0]<<","<<scores[1]<<","<<scores[2]<<endl;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

