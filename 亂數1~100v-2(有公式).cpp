#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
#include<time.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int max=10;
    int min=1;
    int keyin;
    int sum=0;
	srand(time(NULL));
    int guess=rand()%max+min;
    cout<<guess<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

