#include <string.h>
#include <stdio.h>
#include <conio.h>


//Verifica a quantidade de caracteres na string
int main()
{
    char str[100];
    printf("Digite uma frase\n");
    gets(str);
    system("cls");
    printf("A frase digitada tem: %d caracteres",strlen(str));
    getch();
    return 0;
}
