#include <stdio.h>

void reverseArray(int ary[], int n) {
    int i, temp;

    for (i = 0; i < n / 2; i++) {
        temp = ary[i];
        ary[i] = ary[n - 1 - i];
        ary[n - 1 - i] = temp;
    }
}

int main() {
    int ary[100];
    int n, i;

    printf("Nhap so phan tu n = ");
    scanf("%d", &n);

    printf("Nhap cac phan tu:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ary[i]);
    }

    reverseArray(ary, n);

    printf("Mang sau khi dao nguoc:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ary[i]);
    }

}
