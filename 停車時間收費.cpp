#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int hour1,hour2,money,a,b=0;
    int minutes1,minutes2=0;
	cout<<"���\n";
    printf("�п�J�i���ɶ�");
    scanf("%d%d",&hour1,&minutes1);
    printf("�п�J�X���ɶ�");
   	scanf("%d%d",&hour2,&minutes2);
    
    a=(minutes2-minutes1)+((hour2-hour1)*60);
    b=a/30;
	 
    if(b<=120)
    {
		money=b*30;
	}
	else if(b>120 && b<240)
	{
		money=b*40;
	}
    else if(b>240)
    {
    	money=b*60;
	}
	else if(b<30)
	{
		money=0;
	}
	
	cout<<"�i���ɶ��O"<<hour1<<"-"<<minutes1<<endl;
    cout<<"�X���ɶ��O"<<hour2<<"-"<<minutes2<<endl;
    cout<<"�������`����"<<a<<endl;
    cout<<"�������`�O�άO"<<money<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

