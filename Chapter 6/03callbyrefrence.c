#include<stdio.h>
void wrong_swap(int a , int b);
void swap(int *a , int*b);
int main(){
    int a = 3,b =4;
    printf("The value of a ns b is %d and %d\n",a,b);
    //wrong_swap(a,b);
    swap(&a,&b);
    printf("The value of a ns b is %d and %d\n",a,b);

return 0;
}
// void wrong_swap(int a ,int b){
//     int temp ;
//     temp = a;
//     a = b;
//     b = temp;

// }
void swap(int *a , int*b){

 int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}