#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int money,money1=0;
    float a=0;
    cout<<"���================================="<<endl;
    cout<<"�п�J��X�ұo�b�B:";
    cin>>money;
    
    if(money<=540000)
	{
    	a=0.05;
    	money1=0;
	}
	else if(money<=1200000)
	{
    	a=0.1;
    	money1=36400;
	}
	else if(money<= 2420000)
	{
    	a=0.2;
    	money1=130000;
	}
	else if(money<=4530000)
	{
    	a=0.3;
    	money1=365000;
	}
	else
	{
		a=0.4;
		money1=805000;
	}
	cout<<"��X�ұo�b�B:"<<money<<endl;
	cout<<"�|�B:"<<a*100<<"%\n";
	cout<<"�|��:"<<money*a<<endl;
	cout<<"�ֶi�t�B"<<money1<<endl;
	cout<<"���~���ǵ|�B:"<<(money*a)-money1<<endl; 
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

