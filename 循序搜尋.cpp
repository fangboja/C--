#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{	
	int num=0;
	int i=0;
	int a[3]={121,501,205};
	string b[]={"stu3","fang1","boja3"};
	for(i=0;i<3;i++){
		cout<<"�п�J�����̪��s��";
		cin>>num;
		if(num==a[0]){
			cout<<"�����̪��m�W��:"<<b[1];
			
			break;
		}
		else if(num!=a[1] && num!=a[2]){
			cout<<"�d�L�����"<<endl;
			
		}
		
	}
	cout << "(�@���" << i+1 << "��)"<<endl; 
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

