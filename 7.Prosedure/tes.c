#include<stdio.h>
#include<string.h>

void polaVertikalArray(char kalimat[100]){
    
char kata[100][100];
int kata_max;
int jumlah_kata = 0;
int j;
int i;
int index = 0;
char kalimat_copy[100];

strcpy(kalimat_copy, kalimat);

char *token = strtok(kalimat_copy, " ");
while (token != NULL)
{
    jumlah_kata++;
    strcpy(kata[index++], token);
    token = strtok(NULL, " ");
}

kata_max = 0;
for ( i = 0; i < index; i++)
{
    if(strlen(kata[i]) > kata_max ){
        kata_max = strlen(kata[i]);
    }
}

char vertikal[kata_max][jumlah_kata];

for ( i = 0; i < kata_max; i++)
{
    for ( j = 0; j < jumlah_kata; j++)
    {
        if (i >= strlen(kata[j]))
        {
        vertikal[i][j] = ' ';
        }else{
        vertikal[i][j] = kata[j][i];
        }      
    }
}

for ( i = 0; i < kata_max; i++)
{
for ( j = 0; j < jumlah_kata; j++)
{
printf("%c ",vertikal[i][j]);
}
printf("\n");
}
}

int main(){

polaVertikalArray("Purwakarta Istimewa");


return 0;
}
