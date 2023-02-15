#include<stdio.h>
int main(){
int x[5];

scanf("%d", &x[0]);
while(getchar() != '\n');
scanf("%d", &x[1]);
while(getchar() != '\n');
scanf("%d", &x[2]);
while(getchar() != '\n');
scanf("%d", &x[3]);
while(getchar() != '\n');
scanf("%d", &x[4]);
while(getchar() != '\n');
scanf("%d", &x[5]);

printf("%d",x[0]);
printf("%d",x[1]);
printf("%d",x[2]);
printf("%d",x[3]);
printf("%d",x[4]);
printf("%d",x[5]);


return 0;
}