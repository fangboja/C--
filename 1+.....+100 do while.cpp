#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int i=0;
    int sum=0;
    do
    {
    	if(i !=100)
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
    while(i<=100);
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

