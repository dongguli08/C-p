//#include <stdio.h>
//
//
//double average(double a, double b){
//    return (a + b) / 2.0;
//}
//
//int main(void) {
//    double c, d, avg;
//
//   
//    printf("첫 번째 실수를 입력하세요: ");
//    scanf("%lf", &c);
//    printf("두 번째 실수를 입력하세요: ");
//    scanf("%lf", &d);
//
//    
//    avg = average(c, d);
//
//    
//    printf("두 실수의 평균: %lf\n", avg);
//
//    return 0;
//}

#include <stdio.h>


double m(int c) {
    return c / 100.0;
}

int cm(double d) {
    return d * 100;
}

int main(void) {
    int a;
    double b;
    printf("키를 cm로 입력하시오: ");
    scanf("%d", &a);    
    printf("당신의 키는 %.2f m\n", m(a));

    printf("당신의 키를 m로 입력하시오: ");
    scanf("%lf", &b);
    printf("당신의 키는 %d cm\n", cm(b));

    return 0;
}


