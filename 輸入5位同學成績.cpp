#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	int score=0,sum=0;
	cout<<"�p���Z�W������P�ǡA�ЧA���p���]�p�@�ӿ�J���Z���{��";
	cout<<"�A�åB�b��J���Z������`���Z�P�����{�Z\n" ;
	cout<<"==========================================================================\n";
	
	cout<<"�п�J�Ĥ@��P�Ǧ��Z:";
	cin>>score;
	
	cout<<"�п�J�ĤG��P�Ǧ��Z:";
	cin>>score;
	
	cout<<"�п�J�ĤT��P�Ǧ��Z:";
	cin>>score;
	
	cout<<"�п�J�ĥ|��P�Ǧ��Z:";
	cin>>score;
	
	cout<<"�п�J�Ĥ���P�Ǧ��Z:";
	cin>>score;
	
	sum=score+score+score+score+score;
	float average =(float)sum/5;
	printf("���Z�`���Z��:%d",sum);
	printf("�������Z��:%.2f\n",average);
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

