#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int score=0;
    cout<<"�п�J���Z";
    cin>>score;
    
    if(score>=60){
    	cout<<"�ή�\n";
	}
	else{
		cout<<"���ή�\n"; 
	}
	cout<<"�{������\n";
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

