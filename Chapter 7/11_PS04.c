#include<stdio.h>

int main(){
    int a;
int mul[10];
printf("Enter the value of which you want tables of :\n");
scanf("%d",&a);
for(int i=0;i<10;i++){
    mul[i]= a*(i+1);
}
for(int i=0;i<10;i++){
    printf("%dX%d =%d\n",a,i+1,mul[i]);
}

return 0;
}