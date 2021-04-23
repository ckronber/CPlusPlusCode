#include <stdio.h>
#include <stdlib.h>

#define MAX 6000
#define MIN 60

int main()
{
    int randVal;
    int seedVal = 1234;
    srand(seedVal);
    randVal = rand()%((MAX+1)-MIN) + MIN;
    printf("The random Value is: %d \n\n", randVal);

    return 0;
}
