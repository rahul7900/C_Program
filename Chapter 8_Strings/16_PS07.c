#include <stdio.h>
void decrypt(char *a)
{
    char *ptr = a;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char a[] = "J!bn!UIF!LJMMFS";
    decrypt(a);
    printf("Decrypted string is :%s", a);

    return 0;
}