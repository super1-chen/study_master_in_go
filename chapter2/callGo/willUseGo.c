#include <stdio.h>
#include "usedByC.h"

int main(int argc, char **argsv)
{
    GoInt x = 12;
    GoInt y = 24;

    printf("About to call a go Function!\n");
    PrintMessage();
    GoInt p = Multiply(x, y);
    printf("Product %d\n", (int)p);
    printf("It's worked!\n");
    return 0;
}