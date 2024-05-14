#include <stdio.h>

int main(void){
		/*int a=10;//a,b선언 
		int b=20;
		int *p1,*p2;//포인터 선언 
		
		p1=&a; //포인터에 a와b 주소값 대입 
		p2=&b;
		printf("%d %d\n",*p1,*p2); //저장된 주소값을 출력 
		
		(*p1)--; // 값을 1씩 감소. 만약 괄호를 빼면 주소값 그 자체를 다른곳으로 이동시킨다 
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
