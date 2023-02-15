#include<stdio.h>
int main(){
int panjang;
int lebar;
int luas;

printf("menghitung luas persegi panjang \n");
printf("masukan panjang, dan lebar :");
scanf("%d ",&panjang);
scanf("%d",&lebar);
luas = panjang * lebar;

printf("luasnya adalah %d", luas);


return 0;
}