#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int num=0;
	cout<<"�п�J�Ʀr";
    cin>>num;
    for(int i=2;i<num;i++){
    	if(num%i==0 && num/i != 1){
			cout<<"���O���"<<endl;
			break;
		}
		else{
		cout<<"�O���"<<endl;
		break;	
		}
		
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

