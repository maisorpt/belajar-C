#include<stdio.h>
int main(){

int tabInt[5];
int penghitung;
int minimal;

for ( penghitung = 0; penghitung < 5; penghitung++)
{
    printf("masukan angka\n");
    scanf("%d", &tabInt[penghitung]);
    while(getchar() != '\n');
}

minimal = 9999;
for (penghitung = 0; penghitung < 5; penghitung++)
{
    if (tabInt[penghitung] < minimal)
    {
        minimal = tabInt[penghitung];
    }
    
}

printf("nilai terkecil adalah %d", minimal);




return 0;
}