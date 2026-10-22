#include <stdio.h>

int main() {
    //test case 1
    int n1, even1;
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    if (n1 % 2 == 0) {
        even1 = n1;
    } else {
        even1 = n1 - 1;
    }

    for (int i = even1; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    //test case 2
    int n2, even2;
    scanf("%d", &n2);

    for (int i = 1; i <= n2; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    if (n2 % 2 == 0) {
        even2 = n2;
    } else {
        even2 = n2 - 1;
    }

    for (int i = even2; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    //test case 3
    int n3, even3;
    scanf("%d", &n3);

    for (int i = 1; i <= n3; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    if (n3 % 2 == 0) {
        even3 = n3;
    } else {
        even3 = n3 - 1;
    }

    for (int i = even3; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}   