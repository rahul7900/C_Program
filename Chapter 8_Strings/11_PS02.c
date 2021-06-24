#include <stdio.h>
#include<string.h>


int main()
{
    char a[32];
    char b[32];
    int i = 0;
    printf("Enter the value of 1st staring\n");
    scanf("%s", a);
    char c;
    printf("Enter the value of 2nd string\n");
    // fflush(stdin);
    // scanf("%c", &c);

    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        b[i] = c;
        i++;
    }
    b[i-1] = '\0';
    printf("The value of a is %s\n", a);
    printf("The valuue of b is %s\n", b);
    printf("The comparision for both the strings is %d",strcmp(a,b));

    return 0;
}