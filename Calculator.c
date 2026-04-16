#include <stdio.h>
int main(){

    int a, b, c;

   while(1) {
    printf("\nPlease enter the desired multiplication: \n");
    scanf("%d %d", &a, &b);

    c = a*b;

    printf("\nResult: %d.\n", c);

   }

   return 0;

}