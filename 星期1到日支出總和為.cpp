#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int money=0,sum=0;
    for(int i=1;i<=7;i++){
    	if(i==7){
    		printf("�P�����X��:\n");
    		cin>>money;
		}
		else{
			cout<<"�P��"<<i<<"��X��\n";
			cin>>money; 	
		}
	sum=money+money+money+money+money+money+money; 
	}
	cout<<"�`�X��"<<sum<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

