#include <stdio.h>

int main()
{
    int i,c;
    printf("***********Multiplication table of 8**************\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("8 x %d = %d\n", i, i * 8);
    }{
        c =i * 8;
    }
    
    int a = c ;
   int sum = 1;
    while (a <= 10)
    {
        sum += a;
        a++;
    }
    printf("The sum of multiplication table is %d\n",sum);
    printf("*******************************************************************************************");
    return 0;
}