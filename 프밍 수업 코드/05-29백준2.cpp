//#include <stdio.h>

//int main(void){
	/*int num;
	int a,b;
	printf("갯수를 입력하시오:");
	scanf("%d",&num);
	
	for(int i=0; i<num; i++){
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d + %d = %d\n",i+1,a,b,a+b);*/
		/*int a,b;
		while(scanf("%d %d",&a,&b) !=-1){
		printf("%d",a+b);
		}*/
	#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int basket[N + 1];  // 바구니를 1부터 시작하기 위해 N+1 크기로 배열 선언
    for (int i = 1; i <= N; i++) {
        basket[i] = i;  // 각 바구니에 초기 공의 번호를 배정
    }

    for (int j = 0; j < M; j++) {
        int i, k;
        scanf("%d %d", &i, &k);
        // 두 바구니의 공 위치를 바꿈
        int temp = basket[i];
        basket[i] = basket[k];
        basket[k] = temp;
    }

    // 변경된 바구니의 공 번호 출력
    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }
    printf("\n");
    
    return 0;
}

	

