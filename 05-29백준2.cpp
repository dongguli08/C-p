//#include <stdio.h>

//int main(void){
	/*int num;
	int a,b;
	printf("������ �Է��Ͻÿ�:");
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
    
    int basket[N + 1];  // �ٱ��ϸ� 1���� �����ϱ� ���� N+1 ũ��� �迭 ����
    for (int i = 1; i <= N; i++) {
        basket[i] = i;  // �� �ٱ��Ͽ� �ʱ� ���� ��ȣ�� ����
    }

    for (int j = 0; j < M; j++) {
        int i, k;
        scanf("%d %d", &i, &k);
        // �� �ٱ����� �� ��ġ�� �ٲ�
        int temp = basket[i];
        basket[i] = basket[k];
        basket[k] = temp;
    }

    // ����� �ٱ����� �� ��ȣ ���
    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }
    printf("\n");
    
    return 0;
}

	

