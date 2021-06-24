#include<stdio.h>

int main(){
int marks[4];
printf("Enter the marks of student 1\n");
scanf("%d",&marks[0]);
printf("Enter the marks of student 2\n");
scanf("%d",&marks[1]);
printf("Enter the marks of student 3\n");
scanf("%d",&marks[2]);
printf("Enter the marks of student 4\n");
scanf("%d",&marks[3]);
printf("You have enterd the marks of student 1=%d,student 2=%d,student 3=%d,student 4=%d",marks[0],marks[1],marks[2],marks[3]);

return 0;
}