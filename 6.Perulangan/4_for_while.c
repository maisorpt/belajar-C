#include<stdio.h>
int main(){

int tabInt[5];
int penghitung;

for (penghitung = 0; penghitung < 5; penghitung++)
{
    printf("masukan angka\n");
    scanf("%d", &tabInt[penghitung]);
    while(getchar() != '\n');
}
penghitung =0;
while ((tabInt[penghitung] != 999) && (penghitung < 5))
{
    printf("%d\n",tabInt[penghitung]);
    penghitung = penghitung + 1;
}


return 0;
}