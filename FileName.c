#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* rny_string) {

    char* answer = (char*)malloc(strlen(rny_string) * 2 + 1);
    int len = strlen(rny_string);

    for (int i = 0; i < len; i++) {
        if (rny_string[i] == 'm') len++;
    }

    int j = 0;
    int k = 0;
    while (rny_string[j] != '\0') {
        if (rny_string[j] == 'm') {
            answer[k] = 'r';
            k++;
            answer[k] = 'n';
            k++;
            j++;
        }
        else {
            answer[k] = rny_string[j];
            k++;
            j++;
        }
    }
    answer[k] = '\0';
    return answer;
}