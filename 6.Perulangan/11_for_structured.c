#include<stdio.h>
int main(){

    typedef struct {
        char string[50];
    }str;
    

str tabStr[10];
int penghitung;

for ( penghitung = 0; penghitung < 10; penghitung++)
{
    printf("Masukan kata : \n");
    scanf("%s", &tabStr[penghitung].string);
    while(getchar() != '\n');
}

for (penghitung = 0; penghitung < 10; penghitung++)
{
    if ((tabStr[penghitung].string[0] == 'a') || (tabStr[penghitung].string[0] == 'A'))
    {
        printf("%s\n", tabStr[penghitung]);
    }
 
}


return 0;
}