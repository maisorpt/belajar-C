#include<stdio.h>
int main(){

int tabInt[5];
int penghitung;

for (penghitung = 0; penghitung < 5; penghitung++)
{
    printf("Masukan angka \n");
    scanf("%d", &tabInt[penghitung]);
    while(getchar() != '\n');
}

for (penghitung = 0; penghitung < 5; penghitung++)
{
    printf("%d \n",tabInt[penghitung]);
}


return 0;
}