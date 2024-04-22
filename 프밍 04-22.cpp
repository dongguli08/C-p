#include<stdio.h>

int main(void){
	
	char arr[21];
	int i;
	
	printf(" 입력하고 싶은 영어단어를 입력하시오:");
	scanf("%s",arr); //[i]를 입력하면 i값 하나에 단어 하나를 입력 받는것이므로 문자열을 입력하려면 arr만 쓰면 된다 
	  
	 for(int i=0; arr[i] !='\0'; i++){
	 	printf("'%c'",arr[i]);
	 	printf("\n");
	 }
}


/*#include <stdio.h>
#include <string.h>

int main() {
    char word[21]; // 최대 20자 이하의 단어를 입력받기 위한 배열
    int i;

    printf("영어 단어를 입력하세요 (20자 이하): ");
    scanf("%s", word); // 최대 20자까지 입력받음

    printf("입력한 단어의 각 글자:\n ");
	for(int i=0; word[i] !='\0'; i++) {
        printf("%c\n ", word[i]); // 한 글자씩 출력
    }
    printf("\n");

    return 0;
}*/

