#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int math=0;
    float a=0;
    string str;
    cout<<"���================================\n";
    cout<<"�п�J�z���s��:";
    cin>>math;
    if(math>=1000000)
    {
		str="A�ŷ|��";
		a=0.04;	
	}
	else if(math<=999999 && math>=500000)
	{
		a=0.02;
		str="B�ŷ|��";
	} 
	else
	{
		a=0.02;
		str="C�ŷ|��";
	}
	cout<<"�z���Q�v�O"<<a*100<<"%\n";
	cout<<"�|�����ŬO"<<str<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

