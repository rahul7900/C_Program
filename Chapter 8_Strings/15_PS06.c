#include <stdio.h>
void encrypt(char *a)
{
    char *ptr = a;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char a[] = "I am THE KILLER";
    encrypt(a);
    printf("Encrypted string is :%s", a);

    return 0;
}