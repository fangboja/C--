#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    string password;
    do
	{
		cout<<"�п�J�K�X";
    	cin>>password;
	}
    while(password != "5678");
	cout<<"�K�X��J���T"<<endl; 
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

