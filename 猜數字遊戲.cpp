#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
#include<time.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int keyin;
    int sum=0;
    srand(time(NULL));
    int guess=rand()%100+1;
    cout<<"===========�q�Ʀr�C��=================\n";
    do
	{
    cout<<"��J�Ʀr�d��(1~100):";
	cin>>keyin;
	sum+=1;
		if(keyin>=1 && keyin<=100)
		{
			if(keyin==guess)
			{
			cout<<"�q��F\n";
			cout<<"��"<<sum<<"��" <<"�q��F\n";
			break; 
			}
			else if(keyin>guess)
			{
			cout<<"�q���Ʀr�񵪮פj"<<keyin-guess<<endl;
			cout<<"�A��J�@��\n"; 
			}
			else if(keyin<guess)
			{
			cout<<"�q���Ʀr�񵪮פp"<<guess-keyin<<endl;
			cout<<"�A��J�@��\n";
			}
		}
		else
		{
			cout<<"�п�J�d��"<<endl;
			cout<<"�A��J�@��\n";
		}
	}while(true);
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

