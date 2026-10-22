#include <stdio.h>

int main() {
    //test case 1
    int multiples1;
    char symbol1;
    scanf("%d %c", &multiples1, &symbol1);

    for (int i = 1; i <= 50; i++) {
        if (i % multiples1 == 0) {
            printf("%c ", symbol1);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");

    //test case 2
    int multiples2;
    char symbol2;
    scanf("%d %c", &multiples2, &symbol2);

    for (int i = 1; i <= 50; i++) {
        if (i % multiples2 == 0) {
            printf("%c ", symbol2);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");

    //test case 3
    int multiples3;
    char symbol3;
    scanf("%d %c", &multiples3, &symbol3);

    for (int i = 1; i <= 50; i++) {
        if (i % multiples3 == 0) {
            printf("%c ", symbol3);
        } else {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}