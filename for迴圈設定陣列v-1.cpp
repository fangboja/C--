#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int a;//��J�����~ 
    int thing[a];//���h�֪��~�N���h�ֵ����
    int money=0;
    int sum=0;
	cout<<"�п�J���~�ƶq";
	cin>>a;
	
	for(int i=1;i<=a;i++){
	cout<<"�п�J��"<<i<<"���~����:";
	cin>>money;
	sum+=money;
	}
	cout<<"�`�@"<<sum<<"��"<<endl; 
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

