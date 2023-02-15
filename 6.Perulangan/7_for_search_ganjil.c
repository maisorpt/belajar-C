#include<stdio.h>
int main(){

int tabInt[5];
int penghitung;
int jumlah;

// for ( penghitung = 0; penghitung < 5; penghitung++)
// {
//     printf("masukan angka\n");
//     scanf("%d", &tabInt[penghitung]);
//     while(getchar() != '\n');
// }
//     banyak = 0;
// for (penghitung = 0; penghitung < 5; penghitung++)
// {
//     if ((tabInt[penghitung] % 2) == 1)
//     {
//         banyak = banyak + 1;
//     }
    
// }

for ( penghitung = 0; penghitung < 5; penghitung++)
{
    printf("masukan angka\n");
    scanf("%d", &tabInt[penghitung]);
    while(getchar() != '\n');
}
    jumlah = 0;
for (penghitung = 0; penghitung < 5; penghitung++)
{
    if ((tabInt[penghitung] % 2) == 1)
    {
        jumlah = jumlah + tabInt[penghitung];
    }
    
}

printf("jumlah angka ganjil adalah %d",jumlah);



return 0;
}