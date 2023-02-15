#include<stdio.h>
int bigger(int tabInt[]){
int i;
int result = 0;
for ( i = 0; i < 4; i++)
{
    if (result < tabInt[i])
    {
        result = tabInt[i];
    }
}

return result;
    
}

int main(){

int i;
int tabInt[4];

for ( i = 0; i < 4; i++)
{
    printf("\nmasukan angka");
    scanf("%d", &tabInt[i]);
    printf("\n");
}

int result = bigger(tabInt);
printf("%d",result);


return 0;
}