#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
#include <math.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int math1,math2,math3=0;
    int a,b=0;
    cout<<"���====================\n";
    cout<<"�п�J1�䪺���:";
    cin>>math1;
    cout<<"�п�J�t1�䪺���:";
    cin>>math2;
    cout<<"�п�J���䪺���:";
    cin>>math3;
    
    a=pow(math1,2)+(math2,2);
    b=pow(math3,2);//math3��2���� 
    if((math1+math2)<math3)
	{
    	cout<<"���O�T����\n";
	}
	else if(a==b)
	{
		cout<<"�����T����\n";	
	}
	else if(a>b)
	{
		cout<<"�w���T����\n";	
	}
	else
	{
		cout<<"�U���T����\n";
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

