#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int math=0;
    cout<<"�п�J�Ʀr";
    cin>>math;
    if(math>0)
    {
    	if(math%2==0)
    	{
    		cout<<"������\n";	
		}
		else
		{
			cout<<"���n��\n";
		}
    	
	}
	else
	{
		if(math%2==0)
		{
			cout<<"�t����\n";
		}
		else
		{
			cout<<"�t�n��\n"; 
		}
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

