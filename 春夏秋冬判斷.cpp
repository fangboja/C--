#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int season=0;
    cout<<"�п�J�{�b�O�ĴX�u(1~4)";
    cin>>season;
    
    switch(season)
    {
    	case 1:
    		cout<<"�{�b�O�K��"<<endl;
			break;
		case 2:
			cout<<"�{�b�O�L��!"<<endl;
			break;
		case 3:
			cout<<"�{�b�O���!"<<endl;
			break;
		case 4:
			cout<<"�{�b�O�V��"<<endl;
			break; 
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

