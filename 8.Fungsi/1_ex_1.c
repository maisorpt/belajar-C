#include<stdio.h>
int bigger(int a, int b){

int result;


if (a > b)
{
    result = a;
}else if(b > a){
    result = b;
}

return result;

}

int main(){

int a;
int b;
int hasil;

printf("masukan dua buah angka\n");
scanf("%d", &a);
printf("\n");
scanf("%d", &b);

hasil = bigger(a,b);

printf("%d",hasil);
return 0;
}