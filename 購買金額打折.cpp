#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int money=0,moneyprice=0;
    cout<<"��J���B";
    cin>>money;
    if(money>=100000){
    	moneyprice=money*0.8;
	}
	else if(money<=100000 && money>=50000){
			moneyprice=money*0.85;
	}
	else if(money<=50000 && money>=30000){
			moneyprice=money*0.9;
	} 
	else if(money<=30000 && money>=10000){
			moneyprice=money*0.95;
	} 
	else{
		moneyprice=money;
	}
	cout<<moneyprice<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

