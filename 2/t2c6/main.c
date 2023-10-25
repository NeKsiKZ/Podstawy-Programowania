#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x=0;
    time_t t;
    srand((unsigned) time(&t));

    int y=rand()%100+1;

    printf("liczba to %d\n\n", y);

    while (y != x) {
        printf("Podaj liczbe od 1 do 100: \n");
        scanf("%d", &x);

        if (x > y) {
            printf("Twoja liczba jest wieksza od nie wiadomej: \n");
        } else if (x < y) {
            printf("Twoja liczba jest mniejsza od nie wiadomej: \n");
        } else {
            printf("Brawo zgadles ta liczba to %d", y);
        }
    }



    return 0;
}
