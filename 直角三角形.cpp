#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    for(int i=1;i<=5;i++){
    	for(int j=1;j<=i;j++){
    		cout<<"#";
		}
		cout<<"\n";
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

