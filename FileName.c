#include<stdio.h>

int main(void) {

	int lenth;
	int arr[100];
	int n=0;
	int choose;

	scanf_s("%d", &lenth);
	for (int i = 0; i < lenth; i++) {
		printf("������ �Է��Ͻÿ�%d:", i + 1);
		scanf_s("%d", &arr[i]);
	
	}
	/*for (int i = 0; i < lenth; i++) {
		printf("%d", arr[i]);
	}*/
	printf("\n");
	printf("����ϰ� ���� ������ ������ �Է��Ͻÿ�:");
	scanf_s("%d", &choose);

	for (int i = 0; i < lenth; i++) {
		if (arr[i] == choose)
			n += 1;
	}
	printf("%d", n);
}