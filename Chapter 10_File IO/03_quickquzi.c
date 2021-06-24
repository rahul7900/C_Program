#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
      ptr = fopen("Rahul.txt","r");
    if(ptr == NULL){
        printf("The file doesn't exist\n");
    }
 else{
  
   fscanf(ptr,"%d",&num);
    fclose(ptr);
   printf("The value of num is %d",num);
  
 }
return 0;
}