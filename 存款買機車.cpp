#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int money=0;
    int a=0;
   	int sum=0;
    while(sum<30000)
    {
    	cout<<"�п�J��"<<a+1<<"�Ӥ�����s��";
    	cin>>money;
    	a+=1;
   		sum+=money;
	}
	cout<<"����! �w�g�s���F�A�s�F"<<a<<"�Ӥ몺�`�s�ڬ�:"<<sum<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

