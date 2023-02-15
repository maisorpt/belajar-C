#include <stdio.h>
#include <string.h>
int main()
{

    char tabStr[3][10];
    char hasil[3][10];
    int huruf[3];
    int jumlah;
    int i;
    int j;

    printf("masukan kata\n");
    for (jumlah = 0; jumlah < 3; jumlah++)
    {
        scanf("%s", &tabStr[jumlah]);
        while (getchar() != '\n')
            ;
        huruf[jumlah] = strlen(tabStr[jumlah]);
    }

    for (jumlah = 0; jumlah < 3; jumlah++)
    {
        if (tabStr[jumlah][0] == 'a' || tabStr[jumlah][0] == 'A' || tabStr[jumlah][0] == 'u' || tabStr[jumlah][0] == 'U')
        {
            for (i = huruf[jumlah] - 1, j = 0; i >= 0; i--, j++)
            {
                // printf("%d\n",i);
                // printf("%d\n",j);
                hasil[jumlah][j] = tabStr[jumlah][i];
            }
        }
        else if (tabStr[jumlah][0] == 'i' || tabStr[jumlah][0] == 'I')
        {
            if ((huruf[jumlah] % 2) == 0)
            {
                j = 0;
                for (i = (huruf[jumlah] / 2) - 1; i >= 0; i--, j++)
                {
                    hasil[jumlah][j] = tabStr[jumlah][i];
                }

                for (i = j; j < huruf[jumlah]; i++, j++)
                {
                    hasil[jumlah][j] = tabStr[jumlah][i];
                }
            }
            else if ((huruf[jumlah] % 2) == 1)
            {
                j = 0;
                for (i = (huruf[jumlah] / 2); i >= 0; i--, j++)
                {
                    hasil[jumlah][j] = tabStr[jumlah][i];
                }

                for (i = j; j < huruf[jumlah]; i++, j++)
                {
                    hasil[jumlah][j] = tabStr[jumlah][i];
                }
            }
                
            }else{
                for ( j = 0, i = j; j < huruf[jumlah]; j++, i++)
                {
                    hasil[jumlah][j] = tabStr[jumlah][i];
                }
        }
        printf("%s", hasil[jumlah]);
        printf("\n");
    }

    return 0;
}