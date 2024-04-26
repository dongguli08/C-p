#include <stdio.h>

int main(void){
	
	int max=0;
	float aver=0;
	int n;
	
	scanf("%d",&n);
	
	int score[n];
	
	for(int i=0; i<n; i++){
	scanf("%d", &score[i]);
	
	if(max<score[i]){
		max=score[i];
	 }	
	}
	
	for(int i=0; i<n; i++){
	aver += (float)score[i]/max*100;
	}
	
 	printf("%f\n",aver/n);
 	
 	return 0;
}


