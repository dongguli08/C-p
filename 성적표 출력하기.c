#include <stdio.h>

int main(void) {

	/*int money, remain, book = 15000;
	printf("å�� ������ 15000���Դϴ�");
	printf("����� ���� �뵷�� ���ΰ���?:");
	scanf_s("%d",&money);
	if (money >= book)
	{
		remain = money - book;
		printf("å�� �����Ͽ����ϴ�. ���� ���� �뵷�� %d �Դϴ�./n", remain);

	}*/

	int score1, score2;
	printf("1������ ������ �Է��ϼ���:");
	scanf_s(" % d", &score1);
	printf("2������ ������ �Է��ϼ���:");
	scanf_s(" % d", &score2);
	
	if (score1 >= 60) {
		if (score2 >= 60)
			printf("�հ�\n");
		else
			printf("���հ�\n");

	}
	else
		printf("���հ�\n");

}
