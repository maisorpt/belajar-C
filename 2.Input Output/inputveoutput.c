#include<stdio.h>
int main(){
// int a;
// int b;
// int c;

// scanf("%1d" ,&a);
// scanf("%d", &b);
// scanf("%d", &c);

// int d = a + b + c;

// printf("total semua nya adalah %d", d);
// printf("\n");

// int x;
// int y;
// int z;

// scanf("%1d" ,&x);
// scanf("%d", &y);
// scanf("%d", &z);

// int v = x * y * z;

// printf("total semua nya adalah %d", v);

// int celcius;
// int farenhit;
// printf("\n konversi dari celcius ke farenhit \n");
// printf("berapa celcius ?");
// scanf("%d", &celcius);

// farenhit = ((9 * celcius) / 5) + 32;
// printf("%d farenhit", farenhit);

// int celcius;
// int reamur;
// printf("\n konversi dari celcius ke reamur \n");
// printf("berapa celcius ?");
// scanf("%d", &celcius);

// reamur = (4 * celcius) / 5;
// printf("%d reamur", reamur);

int alas;
int atas;
int tinggi;
int luas;
printf("Penhitung luas trapesium\n");
printf("Masukan panjang alas :");
scanf("%d", &alas);
printf("\n Masukan panjang sisi atas :");
scanf("%d",&atas);
printf("\n Masukan tinggi :");
scanf("%d",&tinggi);

luas = (alas + atas) / 2 * tinggi;
printf("\n luas nya adalah %d", luas);


return 0;
}