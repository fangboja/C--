#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
#include<stdio.h>
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int tmp;
	int array[5]={20,45,98,23,85};
    cout<<"�ƶ��ǫe"<<endl;
    for(int i=0;i<5;i++){
     cout<<array[i]<<" "<<endl;
	}

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(array[i]>array[j]){
				tmp=array[i];
				array[i]=array[j];
				array[j]=tmp;
			}	
		}
	}
	cout<<"�ƶ��ǫ�"<<endl;
	for (int i=0; i<5; i++){
			cout << array[i] << " "<<endl;
		}

	
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

