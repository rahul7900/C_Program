#include<stdio.h>

int main(){
FILE *ptr;
int num;
printf("************************************************************************************************\n");
printf("Enter the number you want table of:\n");
scanf("%d",&num);
ptr = fopen("multable.txt","w");
for( int i=0;i<10;i++){
    fprintf(ptr,"%d X %d =%d\n",num,i+1,num*(i+1));
    printf("************************************************************************************************\n");
}
fclose(ptr);
return 0;
}