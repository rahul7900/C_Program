#include <stdio.h>
void display(); //function prototype

int main()
{
    int a;
    printf("Initalizating the display function\n");
    display();
    printf("Display function has done its work\n");
    return 0;
}

void display()
{
    printf("This is display funcation\n");
}
