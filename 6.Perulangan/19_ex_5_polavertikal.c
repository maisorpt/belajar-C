#include <stdio.h>
#include <string.h>
int main()
{
    // char str[20];
    // char balik[20];
    // int space;
    // int jumlah_huruf;
    // int jumlah;
    // int i;

    // printf("Masukan kata\n");
    // scanf("%s", &str);
    // jumlah_huruf = strlen(str);
    // space = jumlah_huruf;

    //    for ( i = jumlah_huruf - 1, jumlah = 0; i >= 0; i--, jumlah++)
    //     {
    //         balik[i] = str[j];
    //     }
    // printf("%s\n",balik);

    // for ( jumlah = 0; jumlah < jumlah_huruf; jumlah++,space--)
    // {

    //     for ( i = 0; i < space; i++)
    //     {
    //         printf(" ");
    //     }

    //     printf("%c\n",balik[jumlah]);
    // }

    char arrChar[20];
    int jumlah;
    int huruf;
    int i;
    int j;
    int bagian;
    int tengah;

    printf("masukan kata\n");
    scanf("%s", &arrChar);

    huruf = strlen(arrChar);

    bagian = huruf / 2;

    if (huruf % 2 == 0)
    {
        for (jumlah = 0; jumlah < bagian; jumlah++)
        {
            for (i = 0; i < jumlah; i++)
            {
                printf(" ");
            }
            printf("%c\n", arrChar[jumlah]);
        } 

        i = bagian;
        for (jumlah = bagian; jumlah < huruf; jumlah++)
        {
            i++;
            for (i, j = huruf;i < j;j--)
            {
                printf(" ");
            }
            
            printf("%c\n", arrChar[jumlah]);
        }
    }
    else if (huruf % 2 == 1)
    {
        int tengah;
            jumlah = 0;
         for ( jumlah;jumlah < bagian; jumlah++)
        {
            for (i = 0; i < jumlah; i++)
            {
                printf(" ");
            }
            printf("%c\n", arrChar[jumlah]);
        } 

        tengah = bagian;
        for ( i = 0; i < tengah; i++)
        {
            printf(" ");
        }
        
        printf("%c\n",arrChar[jumlah]);
        jumlah += 1;

        i = bagian + 1 ;
        for (jumlah; jumlah < huruf; jumlah++)
        {
            i++;
            for (i, j = huruf; i < j; j--)
            {
                printf(" ");
            }
            printf("%c\n", arrChar[jumlah]);
        }
    }

    return 0;
}