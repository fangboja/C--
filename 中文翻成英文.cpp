#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int english=0;
    cout<<"1.�z�n��?"<<endl;
	cout<<"2.�ߦw"<<endl;
	cout<<"3.���w"<<endl;
	cout<<"�п�ܤ��媺�ﶵ<1-3>:";
	cin>>english;
	
	switch(english)
	{
		case 1:
			cout<<"How are you?"<<endl;
			break;
		case 2:
			cout<<"good night"<<endl;
			break;
		case 3:
			cout<<"good moring"<<endl;
			break;
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

