#include<stdio.h>

int main(){
  int num,num2,num3;
FILE *ptr;
ptr= fopen("ps01.txt","r");

fscanf(ptr,"%d",num);
printf("The first value is %d\n",num);

fscanf(ptr,"%d",num2);
printf("The first value is %d\n",num2");

fscanf(ptr,"%d",num3);
printf("The first value is %d\n",num3);


return 0;
}