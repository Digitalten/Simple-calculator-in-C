#include <stdio.h>

int main() {

    int option, a, b, c;
    float f;

    while (1) {
    printf("Choose a calculation expression between 1 for +, 2 for *, 3 for -, and 4 for /.\n");
    scanf("%d", &option);

    printf("\nPlease enter the desired numbers: \n");
    scanf("%d %d", &a, &b);    

    switch (option) {
        case 1:
            c = a + b;
            printf("Result: %d\n", c);    
            break;

        case 2:
            c = a * b;
            printf("Result: %d\n", c);    
            break;

        case 3:
            c = a - b;
            printf("Result: %d\n", c);    
            break;

        case 4:
            if (b != 0) {
            f = (float)a / b;
            printf("Result: %.2f\n", f);
            } else {
            printf("Cannot divide by zero. Sorry.\n");
            }    
            break;

        default:
        printf("Invalid option, please try again.\n");

        }

    }

    return 0;

}
