#include<stdio.h>
int main(){

int tabInt[5];
int penghitung;
int maksimal;

for ( penghitung = 0; penghitung < 5; penghitung++)
{
    printf("masukan angka \n");
    scanf("%d", &tabInt[penghitung]);
    while(getchar() != '\n');
}

maksimal = 0;
for (penghitung = 0; penghitung < 5; penghitung++)
{
    if (tabInt[penghitung] > maksimal)
    {
        maksimal = tabInt[penghitung];
    }
}

printf("nilai terbesar adalah %d",maksimal);

return 0;
}