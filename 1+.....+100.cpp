#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int sum=0;
	for(int i=1;i<=100;i++){
    	if(i != 100){
    		sum+=i;
    		cout<<i<<"+";
    		continue;
		}
		sum+=i;
		cout<<i<<"="<<sum;	
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

