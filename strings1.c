#include <string.h>
#include <stdio.h>
#include <conio.h>


// imprime a string digitada
int main()
{
    char str[100];
    printf("Digite uma frase\n");
    gets(str);
    system("cls");
    printf("A frase digitada: %s",str);
    getch();
    return 0;
}
