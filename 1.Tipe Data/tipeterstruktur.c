#include<stdio.h>
 typedef struct{
    int x;
    int y;
   
   }titik;

   typedef struct{
   
   titik awal;
   titik akhir;
   
   }garis;

   typedef struct{
   garis bawah;
   garis kanan;
   garis kiri;

   }segitiga;

int main(){
titik pertama;
titik kedua;
titik ketiga;
garis g1;
garis g2;
garis g3;
segitiga s;


pertama.x = 0;
pertama.y = 0;


kedua.x = 5;
kedua.y = 0;

ketiga.x = 3;
ketiga.y = 5;


g1.awal = pertama;
g1.akhir = kedua;

g2.awal = pertama;
g2.akhir = ketiga;

g3.awal = kedua;
g3.akhir = ketiga;


s.bawah = g1;

s.kiri = g2;
s.kanan = g3;


return 0;

}