#include<stdio.h>
#include <math.h>
int main(){

int tabInt[3];

int jumlah;

for (jumlah = 0; jumlah < 2; jumlah++)
{
    printf("masukan input alas kemudia tinggi segitiga :");
    scanf("%d", &tabInt[jumlah]);
    while(getchar() != '\n');
}

int x = tabInt[0];
int y = tabInt[1];
int i = sqrt((x*x)+(y*y));

tabInt[2] = i;

printf("%d",tabInt[2]);

return 0;
}