#include <stdio.h>

int main() {
    int A;
    printf("nhap A=");
    scanf("%d", &A);

    int B;
    printf("nhap B=");
    scanf("%d", &B);

    int C;
    printf("nhap C=");
    scanf("%d", &C);

    int Max;
    Max = A;

    if (B > Max) {
        Max = B;
    }

    if (C > Max) {
        Max = C;
    }

    printf("%d", Max);

    return 0;
}
