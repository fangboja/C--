#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int score=0;
    cout<<"�п�J���Z(0~100)";
    cin>>score;
    if(score>=90){
    	cout<<"�u��"<<endl;
	}
	else if(score<90 && score>=80){
		cout<<"�ҵ�"<<endl;
	}
	else if(score<80 && score>=70){
		cout<<"�A��"<<endl;
	}
	else if(score<70 && score>=60){
		cout<<"����"<<endl;
	}
	else{
		cout<<"�B��"<<endl; 
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

