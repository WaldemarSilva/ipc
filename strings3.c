#include <string.h>
#include <stdio.h>
#include <conio.h>
// Imprime o nome somente se começar com A
int main()
{
    char str[100];
    printf("Digite o Nome\n");
    gets(str);
    system("cls");
    if (str[0] == 'a' || str[0] == 'A'){
    printf("Nome: %s",str);
    }
    getch();
    return 0;
}
