#include <stdio.h>

int main(void){
	
	int num;
	
	scanf("%d",&num);
	
	int answer=0;
	for(int i=0 ; i<=num; i++)
		answer+=i;
		printf("%d",answer);
		
		return 0;
}

