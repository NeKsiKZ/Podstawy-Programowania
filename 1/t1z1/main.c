#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d,m;

    printf("Podaj dzien i miesiac: \n");
    scanf("%d %d", &d, &m);

    switch(m) {

        case 1:
        case 2: printf("Jest Zima\n"); break;

        case 3: if (d<21)
                    {
                    printf("Jest Zima\n"); break;
                    }

                else
                    {
                    printf("Jest Wiosna\n"); break;
                    }

        case 4:
        case 5: printf("Jest Wiosna\n"); break;

        case 6: if (d<22)
                    {
                    printf("Jest Wiosna\n"); break;
                    }

                else
                    {
                    printf("Jest Lato\n"); break;
                    }

        case 7: printf(""); break;
        case 8: printf("Jest Lato\n"); break;

        case 9: if (d<23)
                    {
                    printf("Jest Lato\n"); break;
                    }

                else
                    {
                    printf("Jest Jesien\n"); break;
                    }

        case 10:
        case 11: printf("Jest Jesien\n"); break;

        case 12: if (d<21)
                    {
                    printf("Jest Jesien\n"); break;
                    }

                else
                    {
                    printf("Jest Zima\n"); break;
                    }
    }

    int z;

    if (m == 3 && d >= 21) {
        z = 91 - d;
    }

    printf("Do konca tej pory roku zostalo %d\n", z);

    return 0;
}
