#include<stdio.h>
#include <stdlib.h>

int main(){
int *ptr;
ptr = malloc(6 * 4);
// 4 is used bcoz its the byte of interger
ptr = (int *)malloc(6 * sizeof(int));
// sizeof(int or char or float or string) it gives the size of operator and its the better way to use it and it helps to run in different system
//size of operator
// printf("The size of int on my pc is %d\n",sizeof(int));
// printf("The size of char on my pc is %d\n",sizeof(char));
// printf("The size of float on my pc is %d\n",sizeof(float));
for(int i=0;i<6;i++){
    printf("Enter the value of %d element\n",i+1);
    scanf("%d",&ptr[i]);
}
for(int i=0;i<6;i++){
    printf("The value of %d element is: %d\n",i+1,ptr[i]);

}

return 0;