#include <string.h>
#include <stdio.h>
#include <conio.h>
//Imprime os 4 primeiro digitos do nome
int main()
{
    char str[100];
    printf("Digite uma frase\n");
    gets(str);
    system("cls");
    printf("4 primeiros digitos: %c%c%c%c",str[0],str[1],str[2],str[3]);
    getch();
    return 0;
}
