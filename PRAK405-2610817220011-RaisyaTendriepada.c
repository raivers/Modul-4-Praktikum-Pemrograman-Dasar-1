#include <stdio.h>

int main() {
    //test case 1
    int n1, k1, jumlah1, total1 = 0;
    scanf("%d %d", &n1, &k1);

    for (int i = 1; i <= n1; i++) {
        jumlah1 = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, k1);
            jumlah1 += j * k1;
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", jumlah1);
        total1 += jumlah1;
    }
    printf("%d\n", total1);

    //test case 2
    int n2, k2, jumlah2, total2 = 0;
    scanf("%d %d", &n2, &k2);

    for (int i = 1; i <= n2; i++) {
        jumlah2 = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, k2);
            jumlah2 += j * k2;
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", jumlah2);
        total2 += jumlah2;
    }
    printf("%d\n", total2);

    //test case 3
    int n3, k3, jumlah3, total3 = 0;
    scanf("%d %d", &n3, &k3);

    for (int i = 1; i <= n3; i++) {
        jumlah3 = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, k3);
            jumlah3 += j * k3;
            if (j > 1) {
                printf(" + ");
            }
        }
        printf(" = %d\n", jumlah3);
        total3 += jumlah3;
    }
    printf("%d\n", total3);
    return 0;
}