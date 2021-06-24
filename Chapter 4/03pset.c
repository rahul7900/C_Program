//for loop is commented
#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    // for (i = 0; i <= 10; i++)
    //
    //     sum += i;
    // }
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("sum of 1st 10 number is %d", sum);
    return 0;
}