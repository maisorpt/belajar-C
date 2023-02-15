#include<stdio.h>
int main(){
char a;
char b;
char c;
int tanda;

scanf("%c", &a);
while(getchar() != '\n');
scanf("%c", &b);
while(getchar() != '\n');
scanf("%c", &c);
tanda = 0;

if((a != 'a') && (a != 'i') && (a != 'u') && (a != 'e') && (a != 'o')){
if ((b == 'a') || (b == 'i') || (b == 'u') || (b == 'e') || (b == 'o')){
if ((c != 'a') && (c != 'i') && (c != 'u') && (c != 'e') && (c != 'o')){
    tanda =1;
}

}

}

if(tanda == 1){
printf("konsonan-vokal-konsonan\n");

}else{
    printf("bukan konsonan-vokal-konsonan\n");
}

return 0;
}