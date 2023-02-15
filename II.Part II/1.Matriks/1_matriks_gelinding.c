#include <stdio.h>
int main()
{
    int jbaris1;
    int jkolom1;
    int jbaris2;
    int jkolom2;
    int jbaris3;
    int jkolom3;
    int temp;
    int maks1;
    int maks2;
    int maks3;
    int maks;
    int i;
    int j;
printf("masukan  angka\n");
    scanf("%d %d", &jbaris1, &jkolom1);

    int matriks1[jbaris1][jkolom1];
    maks1 = 0;
printf("masukan  angka\n");
    for (i = 0; i < jbaris1; i++)
    {
        for (j = 0; j < jkolom1; j++)
        {
            scanf("%d", &matriks1[i][j]);
            if (matriks1[i][j] > maks1)
            {
                maks1 = matriks1[i][j];
            }
        }
    }
    printf("\n");
    scanf("%d", &temp);
printf("masukan  angka\n");
    scanf("%d %d", &jbaris2, &jkolom2);
    int matriks2[jbaris2][jkolom2];
    maks2 = 0;

    for (i = 0; i < jbaris2; i++)
    {
        for (j = 0; j < jkolom2; j++)
        {
            scanf("%d", &matriks2[i][j]);
            if (matriks2[i][j] > maks2)
            {
                maks2 = matriks2[i][j];
            }
        }
    }
    printf("\n");
    scanf("%d", &temp);
printf("masukan  angka\n");
    scanf("%d %d", &jbaris3, &jkolom3);
    int matriks3[jbaris3][jkolom3];
    maks3 = 0;

    for (i = 0; i < jbaris3; i++)
    {
        for (j = 0; j < jkolom3; j++)
        {
            scanf("%d", &matriks3[i][j]);
            if (matriks3[i][j] > maks3)
            {
                maks3 = matriks3[i][j];
            }
        }
    }
    printf("\n");
    scanf("%d", &temp);

    if ((maks1 > maks2) && (maks1 > maks3))
    {
        maks = maks1;
    }
    else if ((maks2 > maks1) && (maks2 > maks3))
    {
        maks = maks2;
    }
    else
    {
        maks = maks3;
    }

    for ( i = 0; i < jbaris1; i++)
    {
        for ( j = 0; j < jkolom1; j++)
        {
           printf("%d",matriks1[i][j]);
        }
        printf("\n");
        
    }

printf("\n");

    for ( i = 0; i < jbaris2; i++)
    {
        for ( j = 0; j < jkolom2; j++)
        {
           printf("%d",matriks2[i][j]);
        }
        printf("\n");
        
    }

    printf("\n");

        for ( i = 0; i < jbaris3; i++)
    {
        for ( j = 0; j < jkolom3; j++)
        {
           printf("%d",matriks3[i][j]);
        }
        printf("\n");
        
    }

    printf("\n");
    

    // if (maks1 % 2 == 1)
    // {
    //     for (i = (jbaris1 - 1); i >= 0; i--)
    //     {
    //         for (j = 0; j < jkolom1; j++)
    //         {
    //             printf("%d", matriks1[j][i]);
    //         }
    //         printf("\n");
    //     }

    //     for (i = 0; i < jbaris1; i++)
    //     {
    //         for (j = 0; j < jkolom1; j++)
    //         {
    //             printf("%d", matriks1[i][j]);
    //         }
    //         printf("\n");
    //     }
    // }
    // else
    // {
    //     for (i = 0; i < jbaris1; i++)
    //     {
    //         for (j = 0; j < jkolom1; j++)
    //         {
    //             printf("%d", matriks1[i][j]);
    //         }
    //         printf("\n");
    //     }

    //     for (i = (jbaris2 - 1); i >= 0; i--)
    //     {
    //         for (j = 0; j < jkolom2; j++)
    //         {
    //             printf("%d", matriks2[j][i]);
    //         }
    //         printf("\n");
    //     }

    //     for (i = 0; i < jbaris3; i++)
    //     {
    //         for (j = 0; j < jkolom3; j++)
    //         {
    //             printf("%d", matriks3[i][j]);
    //         }
    //         printf("\n");
    //     }
    // }

    return 0;
}
