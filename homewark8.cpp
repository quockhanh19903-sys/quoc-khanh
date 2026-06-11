#include <stdio.h>

int main() {

    int n;
    int a[100];
    int i;
    int x;
    int T = 0;

    printf("Nhap n = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        printf("a[%d] = ", i);
        scanf("%d", &a[i]);

    }

    printf("Nhap x = ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {

        if(a[i] == x) {

            T = 1;
            break;

        }

    }

    if(T == 1) {

        printf("%d co trong mang", x);

    }
    else {

        printf("%d khong co trong mang", x);

    }
}
