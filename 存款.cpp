#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int num=0;
    int money=0;
    int deposit=0;
    while(deposit<30000)
    {
    	num++;
    	cout<<"��"<<num<<"�Ӥ�s�ڬ�";
		cin>>money;
		deposit+=money; 
	}
	cout<<"���ߧA�s��"<<deposit<<"��"<<"�F���ؼ�"<<endl; 
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

