#include <stdio.h>

int main()
{
    printf("***********Multiplication table of 10**************\n");
    for (int i = 10; i; i--)
    {
        printf("10 x %d = %d\n", i, i * 10);
    }
    printf("********************END****************************");
    return 0;
}
