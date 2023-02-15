#include <stdio.h>
#include <string.h>
int main()
{

    char tabStr[5][50];

    int penghitung;
    int huruf;
    int jumlah;

    for (penghitung = 0; penghitung < 5; penghitung++)
    {
        printf("masukan kata : \n");
        scanf("%49s", &tabStr[penghitung]);
        while (getchar() != '\n')
            ;
    }
    
    for (penghitung = 0; penghitung < 5; penghitung++)
    {
    jumlah = 0;
        for (huruf = 0; huruf < strlen(tabStr[penghitung]); huruf++)
        {
            
            if ((tabStr[penghitung][huruf] == 'a') ||(tabStr[penghitung][huruf] == 'A')){
                jumlah ++;
            }   

        }
        printf("jumlah huruf di tabStr[%d] %d \n",penghitung, jumlah);
        
    }


    return 0;
}

