#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{	
	int a[]={1,50,20,6,30};
	int totalsize=sizeof(a);
	int onesize=sizeof(a[0]);
	int b=totalsize/onesize;
	cout<<"�}�C���j�p��:"<<totalsize<<",�@�Ӥ������j�p�O"<<onesize;
	cout<<",�}�C���ƶq�O"<<b<<endl;
	//int onesize=sizeof[a[0]];
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

