#include "pola.h"

void polaTandaPanah(int n){
    
    int bintang = n;
    int baris;
    int kolom;


    for (baris = 1; baris <= ((int)(bintang) / 2); baris++)
    {
        for (kolom = 1; kolom <= (baris - 1); kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= bintang; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    if (((int) bintang / 2) == 1)
    {
        for (kolom = 1; kolom <= bintang; kolom++)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= bintang; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (baris = 1; baris <= ((int)(bintang / 2)); baris++)
    {
        for (kolom = ((int)(bintang / 2) - baris); kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= bintang; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void polaX(int n){

int bintang = n;
int baris;
int kolom;
int batas;
int bagianbawah;

if (bintang % 2 == 0)
{
    batas = bintang / 2;
}else{
    batas =(bintang / 2) + 1;
}

for(baris = 1;baris <= ((int) bintang /2 ); baris++){
     for (kolom = 1;kolom <= baris; kolom++ )
    {
        printf(" ");
    }
    for (kolom = 1;kolom <= bintang; kolom++ )
    {
        printf("*");
    }
         for (kolom = batas;kolom >= baris; kolom-- )
    {
        printf(" ");
    }
             for (kolom = batas;kolom >= baris; kolom-- )
    {
        printf(" ");
    }
    for (kolom = 1;kolom <= bintang; kolom++ )
    {
        printf("*");
    }


    printf("\n");
    
    

}
if (bintang % 2 == 0)
{
    for (kolom = 0; kolom <= batas; kolom++)
{
    printf(" ");
}
for (kolom = 1; kolom < bintang * 2; kolom++)
{
    printf("*");
}
printf("\n");
    for (kolom = 0; kolom <= batas; kolom++)
{
    printf(" ");
}

for (kolom = 1; kolom < bintang * 2; kolom++)
{
    printf("*");
}
}else{
for (kolom = 0; kolom <= batas; kolom++)
{
    printf(" ");
}

for (kolom = 1; kolom < bintang * 2; kolom++)
{
    printf("*");
}
}
printf("\n");
for(baris = 1;baris <= ((int) bintang /2 ); baris++){
     for (kolom = batas;kolom >= baris; kolom-- )
    {
        printf(" ");
    }
    for (kolom = 1;kolom <= bintang; kolom++ )
    {
        printf("*");
    }
         for (kolom = 1;kolom <= baris; kolom++ )
    {
        printf(" ");
    }
    for (kolom =1;kolom <= baris; kolom++ )
    {
        printf(" ");
    }
    for (kolom = 1;kolom <= bintang; kolom++ )
    {
        printf("*");
    }


    printf("\n");
    
}

printf("\n");

}

void polaVertikalArray(char kalimat[100]){
    
char kata[100][100];
int kata_max;
int jumlah_kata = 0;
int j;
int i;
char kalimat_copy[100];
int index = 0;

strcpy(kalimat_copy, kalimat);

char *token  = strtok(kalimat_copy, " ");
while (token != NULL)
{
    jumlah_kata++;
    strcpy(kata[index++], token);
    token = strtok(NULL, " ");
}


kata_max = 0;
for ( i = 0; i < index; i++)
{
    if(strlen(kata[i]) > kata_max ){
        kata_max = strlen(kata[i]);
    }
}

char vertikal[kata_max][jumlah_kata];

for ( i = 0; i < kata_max; i++)
{
    for ( j = 0; j < jumlah_kata; j++)
    {
        if (i >= strlen(kata[j]))
        {
        vertikal[i][j] = ' ';
        }else{
        vertikal[i][j] = kata[j][i];
        }      
    }
}

for ( i = 0; i < kata_max; i++)
{
for ( j = 0; j < jumlah_kata; j++)
{
printf("%c ",vertikal[i][j]);
}
printf("\n");
}
}