#include<stdio.h>

int main(){
int i = 34;
int *ptr =&i;
printf("The address of i is %u\n",ptr);
ptr++;
printf("The address of i is %u\n",ptr);
return 0;
}