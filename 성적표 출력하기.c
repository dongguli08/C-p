#include <stdio.h>

int main(void) {

	/*int money, remain, book = 15000;
	printf("책의 가격은 15000원입니다");
	printf("당신이 가진 용돈은 얼마인가요?:");
	scanf_s("%d",&money);
	if (money >= book)
	{
		remain = money - book;
		printf("책을 구입하였습니다. 이제 남은 용돈은 %d 입니다./n", remain);

	}*/

	int score1, score2;
	printf("1과목의 점수를 입력하세요:");
	scanf_s(" % d", &score1);
	printf("2과목의 점수를 입력하세요:");
	scanf_s(" % d", &score2);
	
	if (score1 >= 60) {
		if (score2 >= 60)
			printf("합격\n");
		else
			printf("불합격\n");

	}
	else
		printf("불합격\n");

}
