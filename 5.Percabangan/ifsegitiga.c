#include<stdio.h>
int main(){
int a;
int b;
int c;

printf("Program untuk memeriksa apakah segitiga siku-suka atau bukan\n");
printf("silahkan masuk sisi yang ada\n");
printf("silahkan masukan panjang alas\n");
scanf("%d", &a);

printf("silahkan masukan tinggi segitiga\n");
scanf("%d", &b);

printf("silahkan masukan sisi miring segitiga\n");
scanf("%d", &c);


a = (a * a) + (b * b);
c = c * c ;
if (a == c)
{
    printf("ini segitiga siku-siku");
}else{
    printf("bukan segitiga siku siku");
}




return 0;
}