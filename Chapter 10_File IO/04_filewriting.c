#include<stdio.h>

int main(){
FILE *p;
int num =45;

p =fopen("generated.txt","w");
fprintf(p,"The mumber is %d",num);
fclose(p);

return 0;
}