#include<stdio.h>
#include<string.h>

int main(){
char *a = "Rahul";
char b[45] = "Hello";
strcat(b,a);
printf("Now the b is this:%s\n",b);
return 0;
}