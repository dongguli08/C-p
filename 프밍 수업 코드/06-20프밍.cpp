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
//    printf("ù ��° �Ǽ��� �Է��ϼ���: ");
//    scanf("%lf", &c);
//    printf("�� ��° �Ǽ��� �Է��ϼ���: ");
//    scanf("%lf", &d);
//
//    
//    avg = average(c, d);
//
//    
//    printf("�� �Ǽ��� ���: %lf\n", avg);
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
    printf("Ű�� cm�� �Է��Ͻÿ�: ");
    scanf("%d", &a);    
    printf("����� Ű�� %.2f m\n", m(a));

    printf("����� Ű�� m�� �Է��Ͻÿ�: ");
    scanf("%lf", &b);
    printf("����� Ű�� %d cm\n", cm(b));

    return 0;
}


