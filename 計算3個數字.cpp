#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int math1=0,math2=0,math3=0,sum=0,a;
    cout<<"�п�J�T�ӼƦr";
	cin>>math1;
	cin>>math2;
	cin>>math3;
	
	sum=math1+math2+math3;
	a=math1*math2*math3;
	float average=(float)sum/3;
	
	printf("�T���`�M:%d\n",sum);
	printf("�T�ƿn:%d\n",a);
	printf("�T���`�M:%.1f\n",average);
	
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

