typedef struct{
    char string[50];

}bungkusan_string;

#include<stdio.h>
int main(){

bungkusan_string arraystring[2];

scanf("%49[^\n]", &arraystring[0].string );

// while(getchar() != '\n');
// scanf("%s", &arraystring[0].string); 
// printf("%s", &arraystring[0].string); //in aku > out aku
// printf("%c", &arraystring[0].string); //in aku > out -
// printf("%c", &arraystring[0].string[0]); //in aku > out a
printf("%s\n", arraystring[0].string[0]); // in aku > out -


// char string1[50];
// char string2[50];
// char string3[50];
// char string4[50];
// char string5[50];

// scanf("%c", &string1);
// while(getchar() != '\n');
// scanf("%c", &string2);
// while(getchar() != '\n');
// scanf("%c", &string3);
// while(getchar() != '\n');
// scanf("%c", &string4);
// while(getchar() != '\n');
// scanf("%c", &string5);
// while(getchar() != '\n');

// printf("%c", string1);
// printf("%c", string2);
// printf("%c", string3);
// printf("%c", string4);
// printf("%c", string5);


return 0;
}