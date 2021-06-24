#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
 
    ptr = fopen("Rahul.txt","r");
   fscanf(ptr,"%d",&num);
   printf("The value of num is %d",num);
   fclose(ptr);
return 0;
}