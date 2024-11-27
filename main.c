#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number;

    srand(time(NULL));
    
    int value = (rand() % 100) + 1; 
    
    while (1) {

        printf("\nEnter number: ");
        
        scanf("%d", &number);

        if (value < number) {
            printf("\nsmaller");
        }
        
        if (value > number) {
            printf("\nbigger");
        }

        if (value == number) {
            printf("you won!");
            return 0;
        }

    }
    return 0;
}
