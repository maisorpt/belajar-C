#include<stdio.h>

void polaKetupat(int n){

int bintang = n;
int i;
int j;

for ( i = 0; i < bintang -1; i++)
{
  for (j = bintang - 1; j > i; j--)
  {
    printf(" ");
  }
for (j = 0; j <= i; j++)
{
    printf(" *");
}
    printf("\n");
}

for ( i = 0; i <+ bintang; i++)
{
    printf(" *");
}

printf("\n");

for ( i = 0; i < bintang -1; i++)
{
for (j = 0; j <= i; j++)
{
    printf(" ");
}

  for (j = bintang - 1; j > i; j--)
  {
    printf(" *");
  }

    printf("\n");
}

}


int main(){

polaKetupat(8);


return 0;
}