#include<stdio.h>

int main(void){
	
	char arr[21];
	int i;
	
	printf(" �Է��ϰ� ���� ����ܾ �Է��Ͻÿ�:");
	scanf("%s",arr); //[i]�� �Է��ϸ� i�� �ϳ��� �ܾ� �ϳ��� �Է� �޴°��̹Ƿ� ���ڿ��� �Է��Ϸ��� arr�� ���� �ȴ� 
	  
	 for(int i=0; arr[i] !='\0'; i++){
	 	printf("'%c'",arr[i]);
	 	printf("\n");
	 }
}


/*#include <stdio.h>
#include <string.h>

int main() {
    char word[21]; // �ִ� 20�� ������ �ܾ �Է¹ޱ� ���� �迭
    int i;

    printf("���� �ܾ �Է��ϼ��� (20�� ����): ");
    scanf("%s", word); // �ִ� 20�ڱ��� �Է¹���

    printf("�Է��� �ܾ��� �� ����:\n ");
	for(int i=0; word[i] !='\0'; i++) {
        printf("%c\n ", word[i]); // �� ���ھ� ���
    }
    printf("\n");

    return 0;
}*/

