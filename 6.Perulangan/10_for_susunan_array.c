#include<stdio.h>
int main(){

char tabStr[10][50];
int penghitung;

for ( penghitung = 0; penghitung < 10; penghitung++)
{
    printf("Masukan kata : \n");
    scanf("%s", &tabStr[penghitung]);
    while(getchar() != '\n');
}

for (penghitung = 0; penghitung < 10; penghitung++)
{
    if ((tabStr[penghitung][0] == 'a') || (tabStr[penghitung][0] == 'A'))
    {
        printf("%s\n", tabStr[penghitung]);
    }
    
}


return 0;
}