#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char z;

    printf("Podaj operator: \n");
    scanf("%c", &z);

    printf("Podaj pierwsza liczbe: \n");
    scanf("%d", &x);

    printf("Podaj druga liczbe: \n");
    scanf("%d", &y);

    switch(z) {
        case '+':
            printf("%d + %d = %d", x, y, x+y);
            break;

        case '-':
            printf("%d - %d = %d", x, y, x-y);
            break;

        case '*':
            printf("%d * %d = %d", x, y, x*y);
            break;

        case '/':
            if ( y != 0)
                {
                printf("%d / %d = %d", x, y, x/y);
                break;
                }

                else
                    printf("Nie mozna dzielic przez 0 :c");
                    break;

        case '%':
            printf("%d", x%y);
            break;
    }

    return 0;
}
