// #include<stdio.h>
// #include<math.h>
// void area(a);
// int main(){
//     int a =2;
//     area(a);
//    // printf("The area of square is %d\n",a);

// return 0;
// }
// void area(a){
//     printf("The area of square is 4\n");

// }
#include <stdio.h>
#include <math.h>
int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value od area of square is %f\n", pow(side, 2));
    //pow is the function which belong to math.h
    // pow returns the double thats why %f

    return 0;
}