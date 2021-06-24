#include <stdio.h>


float force(float mass);

int main()
{


    float mass;
    printf("Enter the value of mass in kgs\n");
    scanf("%f", &mass);


    printf(" The value of force is %f N ", force(mass));

    return 0;
}


float force(float mass)
{


    float result = mass * 9.8;
    return result;

    
}
