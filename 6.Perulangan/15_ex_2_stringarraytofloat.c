#include<stdio.h>
#include <stdlib.h>
int main(){

char tabStr[3][2];
float tabInt[3];

int i;
int jumlah;

printf("masukan float cth : 5.2 \n");

for (jumlah = 0; jumlah < 3; jumlah++)
{
    printf("masukan angka \n");
        
        scanf("%s", &tabStr[jumlah]);
        while(getchar() != '\n');
    
    printf("\n");
}


float x = 0.0;
for ( jumlah = 0; jumlah < 3; jumlah++)
{
    tabInt[jumlah] = atof(tabStr[jumlah]);
    x += tabInt[jumlah];
}

// x += tabInt[0];
printf("%2f", x);

return 0;
}
