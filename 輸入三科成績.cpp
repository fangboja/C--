#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	int math1=0,math2=0,math3=0,sum=0;
    cout<<"�п�J�^�妨�Z";
    cin>>math1;
    
    cout<<"�п�J��妨�Z";
    cin>>math2;
    
    cout<<"�п�J�ƾǦ��Z";
    cin>>math3;
    
    sum=math1+math2+math3;
    float average = (float)sum/3;
    printf("�`����:%d",sum);
    printf("������:%.2f\n",average);
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

