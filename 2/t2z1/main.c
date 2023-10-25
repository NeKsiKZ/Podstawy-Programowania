#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sAnia=0.0, sAda=0.0, wzrost=0.05, kAda=5.0; //Ania suma, Ada suma, wzrost %, startowa ady

    for (int i = 1; i <= 30; i++) {
        if (i % 2 != 0) {
            sAda += kAda;
            kAda += kAda * wzrost;
        } else {
            sAnia += kAda;
            kAda += kAda * wzrost;
        }
    }

    printf("Ania ma %.2fzl, a \nAda %.2fzl\n", sAnia, sAda);
    return 0;
}
