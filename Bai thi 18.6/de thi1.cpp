#include <stdio.h>

int main() {
    int n, i;
    float S = 0;

    printf("Nhap n = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error! n phai lon hon 0.");
    }
    else {
        for (i = 1; i <= n; i++) {
            S = S + 1.0 / i;
        }

        printf("S(%d) = %.2f", n, S);
    }

}
