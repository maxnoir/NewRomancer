#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL));
    int bama = rand() % (99999999 + 1 - 9999999) + 9999999;
}
