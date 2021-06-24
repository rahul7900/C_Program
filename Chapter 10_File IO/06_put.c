#include<stdio.h>

int main(){
    char c;
FILE *p;
p = fopen("putcdemo.txt","w");
putc("c",p);
putc("c",p);
putc("c",p);
putc("c",p);
putc("c",p);
putc("c",p);
putc("c",p);
putc("c",p);

fclose(p);
return 0;
}