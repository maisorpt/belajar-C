#include<stdio.h>
int main(){

char string[5];

scanf("%c", &string[0]);
while(getchar() != '\n');
scanf("%c", &string[1]);
while(getchar() != '\n');
scanf("%c", &string[2]);
while(getchar() != '\n');
scanf("%c", &string[3]);
while(getchar() != '\n');
scanf("%c", &string[4]);

printf("%c",string[0]);
printf("%c",string[1]);
printf("%c",string[2]);
printf("%c",string[3]);
printf("%c",string[4]);


return 0;
}