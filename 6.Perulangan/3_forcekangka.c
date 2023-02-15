#include<stdio.h>
int main(){
int penghitung;
int tab[5];
int ketemu;
for (penghitung = 0; penghitung < 5; penghitung++)
{
    printf("masukan angka \n");
    scanf("%d", &tab[penghitung]);
    printf("\n");
}
ketemu = 0;
penghitung =0;
while ((ketemu == 0) && (penghitung <= 5))
{
    if ((tab[penghitung] % 2) == 1)
    {
        ketemu = 1;
    }
    else{
    penghitung = penghitung + 1;
    }
}
if (ketemu == 0){
printf("tidak ada angka ganjil\n");

}
else{
printf("ada angka ganji;\n");
}



return 0;
}