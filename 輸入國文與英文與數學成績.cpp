#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int score=0,sum=0;
    cout<<"�п�J��妨�Z(0~100):";
    cin>>score;
    
    cout<<"�п�J�^�妨�Z(0~100):";
    cin>>score;
    
    cout<<"�п�J�ƾǦ��Z(0~100):";
    cin>>score;
    
    sum=score+score+score;
    float average=float(sum)/3;
	cout<<"�z���`����:"<<sum;
	printf("�A������:%.2f\n",average);
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

