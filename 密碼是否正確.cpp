#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int password=0;
	cout<<"�п�J�K�X";
    cin>>password;
    if(password==1234){
    	cout<<"�K�X���T!�w���[�{"<<endl;
		cout<<"�{������"<<endl; 
	}
	else{
		cout<<"�{������"<<endl;	
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

