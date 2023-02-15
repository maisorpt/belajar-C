#include<stdio.h>
#include<string.h>
int main(){

char tabChar[2][20];
int jumlah_huruf[2];
int jumlah;
int huruf_vokal[2];
int i;

printf("masukan kata\n");
for ( jumlah = 0; jumlah < 2; jumlah++)
{
    scanf("%s", &tabChar[jumlah]);
    while(getchar() != '\n');
    jumlah_huruf[jumlah] = strlen(tabChar[jumlah]);
}
for (jumlah = 0; jumlah < 2; jumlah++)
{
    huruf_vokal[jumlah] = 0;
   for ( i = 0; i < jumlah_huruf[jumlah]; i++)
   {
        
        if (tabChar[jumlah][i] == 'a' || tabChar[jumlah][i] == 'A' || tabChar[jumlah][i] == 'e' ||tabChar[jumlah][i] == 'E'|| tabChar[jumlah][i] == 'i'|| tabChar[jumlah][i] == 'I'|| tabChar[jumlah][i] == 'u'|| tabChar[jumlah][i] == 'U'|| tabChar[jumlah][i] == 'O' || tabChar[jumlah][i] == 'o')
        {
            huruf_vokal[jumlah] = huruf_vokal[jumlah] + 1;
        }
   }
   
   printf("jumlah huruf vokal di array index %d adalah %d\n",jumlah ,huruf_vokal[jumlah]);
   if (huruf_vokal[jumlah] >= 1)
   {
    printf("%s\n",tabChar[jumlah]);
   }
   
}



return 0;
}
