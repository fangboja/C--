#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int sum=0;
    int num=0;
    int score=0;
    do
	{
    	cout<<"��"<<num+1<<"��ǥͦ��Z";
		cin>>score;
		if(score<0)
		{
			break;	
		}
		sum+=score;
		num+=1;	
	}while(true);
	cout<<sum<<endl;
	cout<<float(sum)/num<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

