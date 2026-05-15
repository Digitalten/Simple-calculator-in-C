#include <stdio.h>

void menu(){
    printf("1 - Plus\n");
    printf("2 - Minus\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("5 - Exit\n");
    }

    int plus(int a, int b){
        return a + b;
    }

    int minus(int a, int b){
        return a - b;
    }

    int multiplication(int a, int b){
        return a * b;
    }

    float division(int a, int b){
        if(b == 0){
            printf("Cannot divide by 0.\n");
            return 0;
        }
        return (float)a / b;
    }

    int main(){
        int option;
        
        do {
            menu();
            scanf("%d", &option);

            if (option == 1) {
                printf("The desired calculation please: \n");
                int x, y;
                scanf("%d %d", &x, &y);
                printf("Result: %d\n\n", plus(x, y));
            }
            if (option == 2) {
                printf("The desired calculation please: \n");
                int x, y;
                scanf("%d %d", &x, &y);
                printf("Result: %d\n\n", minus(x, y));
            }
            if (option == 3) {
                printf("The desired calculation please: \n");
                int x, y;
                scanf("%d %d", &x, &y);
                printf("Result: %d\n\n", multiplication(x, y));
            }
            if (option == 4) {
                printf("The desired calculation please: \n");
                int x, y;
                scanf("%d %d", &x, &y);
                printf("Result: %f\n\n", division(x, y));
            }
        } while (option != 5);

        return 0;
    }
