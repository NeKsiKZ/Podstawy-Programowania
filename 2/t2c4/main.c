#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0, x=0;

    while (sum < 100) {
        printf("Podaj liczbe: \n");
        scanf("%d", &x);
        sum += x;
        printf("Suma wynosi: %d \n", sum);
    }

    printf("suma przekroczyla 100. \n");

    return 0;
}
