#include<stdio.h>
void printAdd(int a);

int main(){
int i = 6;
 printf("The value of i is %d\n", i);
printf("The address of the i is %u\n",&i);
printAdd(i);
return 0;
}
void printAdd(int a)
{
    printf("The address of variable a is %u\n",&a);
}