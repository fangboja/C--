#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int math=0;
    int sum=0;
    do
    {
    	cout<<"�п�J����";
		cin>>math;
		if(math%2==0)
		{
			sum+=math;	
		}
		else if(math<0)
		{
			break;	
		}
		else
		{
			continue;
		}
		
	}while(true);
	cout<<sum<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

