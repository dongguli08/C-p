#include <stdio.h>

/*int main(void){
	int student[17]={0,};
	printf("%d",sizeof(student));
	return 0;
}*/

#include<stdio.h>

int main(void) {

	int lenth;
	printf("������ ������ �Է��Ͻÿ�:"); 
	scanf("%d", &lenth);
    int arr[lenth];
	int n=0;
	int choose;

	
	for (int i = 0; i < lenth; i++) {
		printf("������ �Է��Ͻÿ�%d:", i + 1);
		scanf("%d", &arr[i]);
	
	}
	for (int i = 0; i < lenth; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("����ϰ� ���� ���ڸ� �Է��Ͻÿ�:");
	scanf("%d", &choose);

	for (int i = 0; i < lenth; i++) {
		if (arr[i] == choose)
			n += 1;
	}
	printf("%d", n);
}
