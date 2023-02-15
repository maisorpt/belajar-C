#include<stdio.h>
int main(){

typedef struct 
{
    int jari;
}lingkaran;

lingkaran jari_jari[3];
int luas[3];
int jumlah;


printf("masukan jari-jari 3 buah lingkaran\n");

for ( jumlah = 0; jumlah < 3; jumlah++)
{
    scanf("%d", &jari_jari[jumlah].jari);
    while(getchar() != '\n');
}

for (jumlah = 0; jumlah < 3; jumlah++)
{
    luas[jumlah] = (jari_jari[jumlah].jari*jari_jari[jumlah].jari)*( 3.14 );
    printf("%d",luas[jumlah]);
    printf("\n");
}


return 0;
}