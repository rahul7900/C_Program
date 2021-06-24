#include<stdio.h>
void printTable(int *mulTable, int num,int n){
    printf("The multiplication Table of %d is :\n",num);
    for(int i=0;i<n;i++){
mulTable[i]= num*(i+1);
}
for(int i=0;i<n;i++){
    printf("%dX%d =%d\n",num,i+1,mulTable[i]);
}
printf("***********************************************************************************************\n\n");
}

int main(){
    int m;
int mulTable[m][10];
printf("Enter the value of m:\n");
scanf("%d",&m);
printTable("mulTable[%d],2 ,10",m);



return 0;
}