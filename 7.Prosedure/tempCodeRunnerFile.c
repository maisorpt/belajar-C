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