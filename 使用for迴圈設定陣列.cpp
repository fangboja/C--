#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int score[5];//�i�H�s�J5���� 
    int average=0.0;
    int sum=0;
    for(int i=1;i<=5;i++){ 
    	cout<<"��"<<i<<"��ǥͪ����Z";
    	cin>>score[i];
	}
	for(int i=1;i<=5;i++){
		sum+=score[i];
	}
	average=(double)(sum/5);
	cout<<"�`����"<<sum<<"������"<<average<<endl; 
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

