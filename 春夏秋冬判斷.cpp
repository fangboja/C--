#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
#include<stdio.h>
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int season=0;
    cout<<"請輸入現在是第幾季(1~4)";
    cin>>season;
    
    switch(season)
    {
    	case 1:
    		cout<<"現在是春天"<<endl;
			break;
		case 2:
			cout<<"現在是夏天!"<<endl;
			break;
		case 3:
			cout<<"現在是秋天!"<<endl;
			break;
		case 4:
			cout<<"現在是冬天"<<endl;
			break; 
	}
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

