#include <stdio.h>

int main(void){
		/*int a=10;//a,b���� 
		int b=20;
		int *p1,*p2;//������ ���� 
		
		p1=&a; //�����Ϳ� a��b �ּҰ� ���� 
		p2=&b;
		printf("%d %d\n",*p1,*p2); //����� �ּҰ��� ��� 
		
		(*p1)--; // ���� 1�� ����. ���� ��ȣ�� ���� �ּҰ� �� ��ü�� �ٸ������� �̵���Ų�� 
		(*p2)--;
  	
	  int temp=*p1;
		*p1=*p2;
		*p2=temp;
	
	printf("%d %d",*p1,*p2);*/
	
	int num=5;
	int * p1=&num;
	int * p2=&num;
	 
	 *p1=*p1+*p2;
	 printf("%d %d %d",num,*p1,*p2);
	 return 0;
}
