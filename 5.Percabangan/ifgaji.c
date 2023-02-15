#include<stdio.h>
int main(){

    int gaji;
    int lembur;
    printf("Masukan Jam Lembur\n");
    scanf("%d", &lembur);
    while(getchar() != '\n');

if(lembur < 12 ){
    gaji = 100000;
    printf("Gaji lembur sebesar : %d", gaji);
}else if(lembur = 12) {
    gaji = 200000;
    printf("Gaji lembur sebesar : %d",gaji);
}else {
    gaji = 300000;
    printf("Gaji lembur sebesar %d", gaji);
}



return 0;
}