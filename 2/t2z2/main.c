#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pin=1234; //kod PIN
    int x, i;

    while (i < 3) {
        printf("Podaj PIN: \n");
        scanf("%d", &x);

        if (x == pin) {
            break;
            } else {
                i++;
                if (i < 3) {
                    printf("Nieprawidlowy PIN. Pozostalo prob: %d\n", 3 - i);
                    } else {
                        printf("Trzykrotnie bledne logowanie.\n");
                        }
                }
    }


    return 0;
}
