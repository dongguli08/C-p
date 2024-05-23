#include <stdio.h>

int main(void) {
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10];
    
    for (int i = 0; i<10; i++) { //for(int i=9; i=>0; i--) 10부터1까지 복사하는 방법 
        b[i] = a[(i+1)%10];
        printf("%d ", b[i]);
    }
    printf("\n");
    for (int i = 0; i<10; i++) { //for(int i=9; i=>0; i--) 10부터1까지 복사하는 방법 
        b[(i+1)%10] = a[i];
        printf("%d ", b[i]);
    }
}

