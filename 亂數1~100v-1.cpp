#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
#include<time.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    srand(time(NULL));
    int guess=rand()%100+1;
    cout<<guess<<endl;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

