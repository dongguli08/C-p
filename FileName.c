#include<stdio.h>

int main(void) {

	/*char string1[6] = {'H','e','l','l','o','\0'};//널문자를(항상 +1) 넣지 않으면 끝을 알수없다
	char string2[6] = "wprld";
	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s %s\n", string1, string2);*/



	/*char str[18] = "Nice to meet you!";
	printf("배열 str크기 :%d\n", sizeof(str));
	printf("Null 문자 문자형 출력:%c\n", str[17]);
	printf("Null 문자 문자형 출력:%d\n", str[17]);
	str[16] = '?';
	printf("문자열 출력 : %s\n", str);

	return 0;*/

	/*int cnt = 0; // 이름의 길이를 세는 변수
	char sName[100], sNum[10]; //이름과 학번을 문자열로 저장하는 배열
	printf("이름을 영어로 입력하세요:");
	scanf_s("%s", sName); //이름을 문자열로 입력받기
	printf("학번을 입력하세요:");
	//학번 입력받기
	while (sName[cnt] != '\0') {
		cnt++;
		
	}
	printf("당신의 이름은 %s이고 학번은 %d 입니다", sName, sNum);

	return 0;*/

	int numbers[11]; // numbers 10개의 공간을 저장
	int i;
	int average=0;
	int min=100;
	int max = 0;
	
	printf("10개의 숫자를 입력하세요:\n");
	for (i = 0; i < 10; i++) {
		printf("숫자 %d: ", i + 1);
		scanf_s("%d", &numbers[i]);
	}

	for (int i = 0; i < 10; i++) {
		average += numbers[i];
		}
	printf("평균값은 %d\n", average / 10);

	for (int i = 0; i < 10; i++) {
		if (numbers[i] < min)
			min = numbers[i];// numbers[j]에 값들이 저장되어 있음 0부터 9까지 늘어나면서 값들을 비교해서 최저값을 구함
	}
	printf("제일 작은 값은%d\n", min);

	for (int i = 0; i < 10; i++) {
		if (numbers[i] > max)
			max = numbers[i]; 
	}
	printf("제일 큰 값은%d", max); 
	//성적표 최댓값 최솟값 평균값

	
}