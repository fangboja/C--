#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int i=1;
    int sum=0;
    while(i<=100)
    {
    	if(i != 100)
    	{
    		cout<<i<<"+";
		}
		else
		{
			cout<<i<<"=";
		}
		sum+=i;
		i++;
		
	}
	cout<<sum<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

