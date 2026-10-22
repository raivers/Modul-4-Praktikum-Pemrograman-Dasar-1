#include <stdio.h>

int main()  {
    int Choice;
    float a, b;

    while (1) {
        printf("Choose a program\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &Choice);

        if (Choice == 5) {
            printf("Thank you for using the RAISYA calculator");
            break;

        } else if (Choice >= 1 && Choice <= 4) {
            printf("Enter the first value : ");
            scanf("%f", &a);
            printf("Enter the second value : ");
            scanf("%f", &b);
            
            if (Choice == 1) {
                printf("The result of the addition of %.2f and %.2f is %.2f\n", a, b, a + b);
            } else if (Choice == 2) {
                printf("The result of the subtraction of %.2f and %.2f is %.2f\n", a, b, a - b);
            } else if (Choice == 3) {
                printf("The result of the multiplication of %.2f and %.2f is %.2f\n", a, b, a * b);
            } else {
                printf("The result of the division of %.2f and %.2f is %.2f\n", a, b, a / b);
            }

        } else {
            printf("Your input is invalid, please try again\n");
        }
    }
    return 0;
}