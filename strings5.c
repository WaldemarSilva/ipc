#include <string.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100];
    int j=0;
    printf("Digite um numero binario\n");
    gets(str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
        {
            j++;
        }
    }
    printf("Quantidade de 1 : %d",j);

    getch();
    return 0;
}

