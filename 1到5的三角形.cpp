#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    for(int i=5;i>=1;i--)
    {
    	for(int j=0;j<=i;j++)
    		if(j<i)
    		{
    			cout<<i;	
			}
			cout<<endl;	
		}
	
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

