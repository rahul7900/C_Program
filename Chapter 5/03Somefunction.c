#include <stdio.h>
//sum is a functon which takes a and b as an input and return the integer as an output
int sum(int a, int b); //function prototype declaration
int main()
{
    int c;
   c= sum(2, 15); //function call
    printf("The valee of c is %d\n ", c);

    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}