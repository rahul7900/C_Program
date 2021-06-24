#include <stdio.h>

int main()
{
    int i = 0, n = 10,factorial=1;
    for (i = 1; i < n; i++)
    {
        factorial *= i;
    }
    printf("The vale of factorial %d is %d\n", n, factorial);
    return 0;
}