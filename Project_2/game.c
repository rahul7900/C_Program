#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int SnakeWaterGun( char you, char comp){
    // returns 1 if you win , retruns -1 if you lose and returns 0 if its draw
    // condition for draw
if (you == comp)
{
    return 0;
}
//normal conditions
//s-w||w-s
if (you == 's' && comp == 'w')
{
    return 1;
}
else if(you == 'w' && comp == 's')
{
    return -1;
}
//w-g||g-w
if (you == 'w' && comp == 'g')
{
    return 1;
}
else if(you == 'g' && comp == 'w')
{
    return -1;
}
//g-s||s-g
if (you == 'g' && comp == 's')
{
    return 1;
}
else if(you == 's' && comp == 'g')
{
    return -1;
}


}
int main(){
char you, comp;
// comp = 's';
int number;
    srand(time(0));
    number = rand() % 100 + 1;
    if (number < 33){
        comp = 's';
    }
    else if (number > 33 && number < 66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }
   
printf("Enter 's' for snake, 'w' for water and 'g' for gun\n");
scanf("%c",&you);
int result = SnakeWaterGun(you,comp);
printf("You chose %c and computer chose %c\n",you,comp);
if (result == 0)
{
    printf("Game Draw!!!\n");
}
else if(result == 1){
    printf("You Won!!!");
}
else{
    printf("You Lose!!!\n");
    printf("Computer:Losser Now FUCK OFF :)\n");
}

return 0;
}