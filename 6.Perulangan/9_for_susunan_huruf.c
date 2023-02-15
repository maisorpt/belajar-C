#include<stdio.h>
#include<string.h>
int main(){

char str[50];

int i;
int j;

printf("masukan kata : \n");
scanf("%s", &str);
while(getchar() != '\n');

for ( i = 0; i < strlen(str); i++)
{
    for ( j = 0; j < i; j++)
    {
        printf(" ");
    }
    
    printf("%c",str[i]);
    printf("\n");
}

return 0;
}