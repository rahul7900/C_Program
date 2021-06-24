#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    //Gives numbwer between 1 to 100
    printf("Your number is %d\n", number);
    return 0;
}