#include <stdio.h>
#include <stdlib.h>

int main() {
    //test case 1
    int a1, b1, step1; 
    scanf("%d %d", &a1, &b1);

    if (a1 < b1) {
        step1 = 1;
    } else {
        step1 = -1;
    }
    for (int i = 0; i <= abs(a1 - b1); i++) {
        if (i > 0) {
            printf("- ");
        }
        printf("%d %d ", a1 + i * step1, b1 - i * step1);
    }
    printf("\n");

    //test case 2
    int a2, b2, step2; 
    scanf("%d %d", &a2, &b2);

    if (a2 < b2) {
        step2 = 1;
    } else {
        step2 = -1;
    }
    for (int i = 0; i <= abs(a2 - b2); i++) {
        if (i > 0) {
            printf("- ");
        }
        printf("%d %d ", a2 + i * step2, b2 - i * step2);
    }
    printf("\n");

    //test case 3
    int a3, b3, step3; 
    scanf("%d %d", &a3, &b3);

    if (a3 < b3) {
        step3 = 1;
    } else {
        step3 = -1;
    }
    for (int i = 0; i <= abs(a3 - b3); i++) {
        if (i > 0) {
            printf("- ");
        }
        printf("%d %d ", a3 + i * step3, b3 - i * step3);
    }
    printf("\n");

    //test case  4
    int a4, b4, step4; 
    scanf("%d %d", &a4, &b4);

    if (a4 < b4) {
        step4 = 1;
    } else {
        step4 = -1;
    }
    for (int i = 0; i <= abs(a4 - b4); i++) {
        if (i > 0) {
            printf("- ");
        }
        printf("%d %d ", a4 + i * step4, b4 - i * step4);
    }
    printf("\n");
    return 0;
}