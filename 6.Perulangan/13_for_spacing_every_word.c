#include<stdio.h>
#include<string.h>
int main(){

char tabStr[5][50];
int i;
int j;
int spasi;

for ( i = 0; i < 5; i++)
{
    printf("masukan input kata : \n");
    scanf("%49s", &tabStr[i]);
    while(getchar() != '\n');
}

spasi = 0;

for ( i = 0; i < 5; i++)
{
    

    // for ( j = 0; j < strlen(tabStr[i]); j++)
    // {
    //     spasi = spasi +1;
    // }
    
    for (j = 0; j < spasi; j++)
    {
        printf(" ");

    }
    spasi = spasi + strlen(tabStr[i]);
    
    printf("%s",tabStr[i]);
    printf("\n");
}




return 0;
}