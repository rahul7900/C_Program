#include <stdio.h>

int main()
{
    int a;
    printf("Enter the vale of a\n");
    scanf("%d", &a);
    while (a < 10)
    { a++;
        if (a != 5)
        {
            continue;
        }
        else
        {
            printf("%d is the vale of a\n", a);
        }
        ;
    }
    return 0;
}