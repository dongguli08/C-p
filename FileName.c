#include<stdio.h>

int main(void) {

	/*char string1[6] = {'H','e','l','l','o','\0'};//�ι��ڸ�(�׻� +1) ���� ������ ���� �˼�����
	char string2[6] = "wprld";
	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s %s\n", string1, string2);*/



	/*char str[18] = "Nice to meet you!";
	printf("�迭 strũ�� :%d\n", sizeof(str));
	printf("Null ���� ������ ���:%c\n", str[17]);
	printf("Null ���� ������ ���:%d\n", str[17]);
	str[16] = '?';
	printf("���ڿ� ��� : %s\n", str);

	return 0;*/

	/*int cnt = 0; // �̸��� ���̸� ���� ����
	char sName[100], sNum[10]; //�̸��� �й��� ���ڿ��� �����ϴ� �迭
	printf("�̸��� ����� �Է��ϼ���:");
	scanf_s("%s", sName); //�̸��� ���ڿ��� �Է¹ޱ�
	printf("�й��� �Է��ϼ���:");
	//�й� �Է¹ޱ�
	while (sName[cnt] != '\0') {
		cnt++;
		
	}
	printf("����� �̸��� %s�̰� �й��� %d �Դϴ�", sName, sNum);

	return 0;*/

	int numbers[11]; // numbers 10���� ������ ����
	int i;
	int average=0;
	int min=100;
	int max = 0;
	
	printf("10���� ���ڸ� �Է��ϼ���:\n");
	for (i = 0; i < 10; i++) {
		printf("���� %d: ", i + 1);
		scanf_s("%d", &numbers[i]);
	}

	for (int i = 0; i < 10; i++) {
		average += numbers[i];
		}
	printf("��հ��� %d\n", average / 10);

	for (int i = 0; i < 10; i++) {
		if (numbers[i] < min)
			min = numbers[i];// numbers[j]�� ������ ����Ǿ� ���� 0���� 9���� �þ�鼭 ������ ���ؼ� �������� ����
	}
	printf("���� ���� ����%d\n", min);

	for (int i = 0; i < 10; i++) {
		if (numbers[i] > max)
			max = numbers[i]; 
	}
	printf("���� ū ����%d", max); 
	//����ǥ �ִ� �ּڰ� ��հ�

	
}