#include<stdio.h>
int strlen(char *s){
    char *ptr= s;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}

int main(){
char s[]="Rahul";
int l= strlen(s);
printf("The lenght of this string is %d",l);

return 0;
}