#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	int sum=0;
    for(int i=2;i<=10;i+=2){
    	sum+=i;
		cout<<"��"<<i/2<<"���j���`�X��"<<sum<<endl;
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

