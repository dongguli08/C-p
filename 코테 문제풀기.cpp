#include<stdio.h>

int main(){
	
	int a[10000];
	int n ,x;
	
	//printf("������ ������ �Է��Ͻÿ�:");
	scanf("%d %d",&n, &x);
	for(int i=0; i<n; i++){
		//printf("����%d:",i+1);
		scanf("%d",&a[i]);
	}
	//printf("���ڸ� �Է��Ͻÿ�:");
	
	for(int i=0; i<n; i++)
		if(a[i]<x)
    
	 	printf("%d ",a[i]);
    return 0;
}
