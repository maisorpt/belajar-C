#include <stdio.h>
int main()
{

    int menu;
    int hasil = 1;

    printf("Plilih dari angka 1 sampai 3\n");
    scanf("%d", &menu);
    while (getchar() != '\n')
        ;

    switch (menu)
    {
    case 1:
        hasil = hasil + 2;
        printf("%d", hasil);
        break;
    case 2:
        hasil = hasil * 2;
        printf("%d", hasil);
        break;
    case 3:
        hasil = hasil - 2;
        printf("%d", hasil);
        break;

    default:
        printf("Maap salah");
        break;
    }

    return 0;
}