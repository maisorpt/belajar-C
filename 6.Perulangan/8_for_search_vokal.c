#include<stdio.h>
#include<string.h>
int main(){

char str[50];

int i;
int jumlah;

printf("masukan kata : \n");
scanf("%s", &str);
printf("\n");

jumlah = 0;

for (i = 0; i < strlen(str); i++)
{
    if ((str[i] == 'a') ||
        (str[i] == 'i') ||
        (str[i] == 'u') ||
        (str[i] == 'e') ||
        (str[i] == 'o'))
    {
        jumlah = jumlah + 1;
    }
    
}

printf("total jumlah huruf vokal %d",jumlah);

return 0;
}