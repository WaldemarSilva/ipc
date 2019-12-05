#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#define MAX 5

//FUNÇÕES E VARIÁVEIS GLOBAIS
void matriz(),verMatriz(),somaMatriz(),subMatriz(),uniMatriz(),inMatriz(),menup(),menup2(),menup3(),confM(),qtdvmatriz();
int menu,l=0,c=0,l1=0,c1=0;
int FConfig=0,p=0;
int m[MAX][MAX],m2[MAX][MAX],sm[MAX][MAX];

void menup()//MENU PRINCIPAL
{
    int menu;
    system("cls");
    menu = 99;
    printf("BEM VINDO(A)\n                                    Programador:Waldemar P. F. Silva\n");
    if (FConfig == 1)
    {
        printf("-==================================================================-\n");
        printf("                               [MENU]:\n [1]: Configurar tamanho das matrizes[PREENCHIDO]:\n [2]: Adicionar Dados as Matrizes[NÃO PREENCHIDA]:\n [3]: Manipular Matrizes[INDISPONÍVEL]\n [9]: Sair\n");
        printf("-==================================================================-\n");
        if (p != 0)
        {
            system("cls");
            printf("Primeira Matriz:\n");
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",m[i][j]);
                }
                printf("\n");
            }
            printf("Segunda Matriz:\n");
            for (int i = 0; i < l1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    printf("[%d] ",m2[i][j]);
                }
                printf("\n");
            }
            printf("-==================================================================-\n");
            printf("                               [MENU]:\n [1]: Configurar tamanho das matrizes[PREENCHIDO]:\n [2]: Adicionar Dados as Matrizes[PREENCHIDO]:\n [3]: Manipular Matrizes[DISPONÍVEL]\n [9]: Sair\n");
            printf("-==================================================================-\n");
        }
    }
    else
    {
        printf("-==================================================================-\n");
        printf("                               [MENU]:\n [1]: Configurar tamanho das matrizes[NÃO PREENCHIDO]:\n [2]: Adicionar Dados as Matrizes[NÃO PREENCHIDO]:\n [3]: Manipular Matrizes[INDISPONÍVEL]\n [9]: Sair\n");
        printf("-==================================================================-\n");
    }
    scanf("%d",&menu);
    switch ( menu )
    {
    case 1:
        system("cls");
        menu = 99;
        if (FConfig == 1)
        {
            system("cls");
            printf("Deseja alterar os valores?\n 1 SIM , 2 NÃO\n");
            scanf("%d",&menu);
            if (menu == 1)
            {
                p=0;
                system("cls");
                confM();
            }
            else
            {
                menup();
            }
        }
        confM();

    case 2:
        if (FConfig == 0)
        {
            printf("Operação Impossível, Matriz não configurada\nPressione qualquer tecla para continuar\n");
            getch();
            menup();
        }
        if (p == 1)
        {
            system("cls");
            menu = 99;
            printf("Deseja alterar a Matriz ?\n 1 SIM , 2 NÃO\n");
            scanf("%d",&menu);
            if (menu == 1)
            {
                matriz();
            }
            else
            {
                menup();
            }
        }
        matriz();
    case 3:
        menup2();

    case 9:
        system("cls");
        printf("By\n");
        printf("   Waldemar P. F. Silva - Sistemas de Informação 2019-2\n");
        system("color A0 &");
        getch();
        exit(0);

    default:
        system("cls");
        printf("Opção Inválida");
        getch();
        menup();
    }
}

void menup2()//MENU SECUNDARIO
{
    if (FConfig == 0|| p == 0)
    {
        printf("Operação Impossível, Matriz não configurada\nPressione qualquer tecla para continuar");
        getch();
        menup();
    }
    menu = 99;
    system("cls");
    printf("Primeira Matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }
    printf("Segunda Matriz:\n");
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d] ",m2[i][j]);
        }
        printf("\n");
    }
    printf("====================================================================\n");
    printf("                               MENU\n");
    printf(" [1]: SOMAR AS MATRIZES\n [2]: SUBTRAIR AS MATRIZES\n [3]: UNIR MATRIZES\n [4]: INTERSECÇÃO DE MATRIZ\n [5]: OPERAÇÕES DE MATRIZES INDIVÍDUAIS\n [6]: VERIFICAR QUANTIDADE DE VEZES QUE O NUMERO x APARECE NAS MATRIZES\n [0]: VOLTAR AO MENU ANTERIOR\n");
    printf("====================================================================\n");
    scanf("%d",&menu);
    if (menu == 0)
    {
        menup();
    }
    else if (menu == 1)
    {
        somaMatriz();
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                sm[i][j] = m[i][j]+m2[i][j];
            }
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("[%d] ",sm[i][j]);
            }
            printf("\n");
        }
    }
    else if (menu == 2)
    {
        subMatriz();
    }
    else if (menu == 3)
    {
        uniMatriz();
    }
    else if (menu == 4)
    {
        inMatriz();
    }
    else if (menu == 5)
    {
        menup3();
    }
    else if (menu == 6)
    {
        qtdvmatriz();
    }
    else
    {
        printf("Opçao Inválida");
        menup2();
    }
}

void menup3()//MENU TERCIARIO
{
    int opcao1=0;
    int opcao2=0;
    int x;

    while (TRUE)
    {
        system("cls");
        printf("Primeira Matriz:\n");
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("[%d] ",m[i][j]);
            }
            printf("\n");
        }
        printf("Segunda Matriz:\n");
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("[%d] ",m2[i][j]);
            }
            printf("\n");
        }
        printf("Escolha uma matriz:\n[1] Matriz 1\n[2] Matriz 2\n[3] Voltar ao Menu Anterior\n");
        scanf("%d",&opcao1);
        if (opcao1 == 1)
        {
            printf("MATRIZ 1 SELECIONADA\n");
            printf("====================================================================\n");
        }
        if (opcao1 == 2)
        {
            printf("MATRIZ 2 SELECIONADA\n");
            printf("====================================================================\n");
        }
        if (opcao1 == 3)
        {
            menup2();
        }
        printf("[1] SOMA [2] MULTIPLICAÇÃO\n");
        scanf("%d",&opcao2);
        printf("====================================================================\n");
        printf("por: ");
        scanf("%d",&x);
        printf("====================================================================\n");
        if (opcao1 == 1)
        {
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (opcao2 == 1)
                    {
                        sm[i][j] = m[i][j]+ x;
                    }
                    else
                    {
                        sm[i][j] = m[i][j]* x;
                    }
                }
            }
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",sm[i][j]);
                }
                printf("\n");
            }
            getch();
        }
        else if (opcao1 == 2)
        {
            for (int i = 0; i < l1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    if (opcao2 == 1)
                    {
                        sm[i][j] = m2[i][j]+ x;
                    }
                    else
                    {
                        sm[i][j] = m2[i][j]* x;
                    }
                }
            }
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",sm[i][j]);
                }
                printf("\n");
            }
            getch();
        }
        else
        {
            printf("Opção Inválida\n");
            getch();
        }
    }
    menup2();
}

void matriz()// FUNÇÃO DE PREENCHIMENTO DE MATRIZ
{
    system("cls");
    printf("Preencha a primeira matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    system("cls");
    printf("Preencha a segunda matriz:\n");
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    p = 1;
    system("cls");
    menup();
}

void somaMatriz()//FUNÇÃO DE SOMA DE MATRIZES
{

    system("cls");
    printf("Primeira Matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }
    printf("Segunda Matriz:\n");
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d] ",m2[i][j]);
        }
        printf("\n");
    }
    printf("====================================================================\n");
    if (c == c1 && l == l1)
    {
        printf("SOMA:\n");
        printf("====================================================================\n");
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                sm[i][j] = m[i][j]+m2[i][j];
            }
        }
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("[%d] ",sm[i][j]);
            }
            printf("\n");
        }
        getch();
    }
    else
    {
        printf("Operação Impossível\nPressione qualquer tecla para continuar");
        getch();
    }
    menup2();
}

void subMatriz()//FUNÇÃO DE SUBTRAÇÃO
{
    int menu;
    if (c == c1 && l == l1)
    {
        system("cls");
        menu = 99;
        printf("Primeira Matriz:\n");
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("[%d] ",m[i][j]);
            }
            printf("\n");
        }
        printf("Segunda Matriz:\n");
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("[%d] ",m2[i][j]);
            }
            printf("\n");
        }
        printf("====================================================================\n");
        printf("[1] MATRIZ 1 - MATRIZ 2\n[2] MATRIZ 2 - MATRIZ 1\n");
        scanf("%d", &menu);
        if (menu == 1)
        {
            system("cls");
            printf("Primeira Matriz:\n");
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",m[i][j]);
                }
                printf("\n");
            }
            printf("Segunda Matriz:\n");
            for (int i = 0; i < l1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    printf("[%d] ",m2[i][j]);
                }
                printf("\n");
            }
            printf("====================================================================\n");
            printf("MATRIZ 1 - MATRIZ 2\n");
            printf("====================================================================\n");
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    sm[i][j] = m[i][j]-m2[i][j];
                }
            }
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",sm[i][j]);
                }
                printf("\n");
            }
        }
        else if (menu == 2)
        {
            system("cls");
            printf("Primeira Matriz:\n");
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",m[i][j]);
                }
                printf("\n");
            }
            printf("Segunda Matriz:\n");
            for (int i = 0; i < l1; i++)
            {
                for (int j = 0; j < c1; j++)
                {
                    printf("[%d] ",m2[i][j]);
                }
                printf("\n");
            }
            printf("====================================================================\n");
            printf("MATRIZ 2 - MATRIZ 1\n");
            printf("====================================================================\n");
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    sm[i][j] = m2[i][j]-m[i][j];
                }
            }
            for (int i = 0; i < l; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("[%d] ",sm[i][j]);
                }
                printf("\n");
            }
        }
    }
    else
    {
        system("cls");
        printf("Operação Impossível\nPressione qualquer tecla para continuar");
        getch();
    }
    getch();
    menup2();
}

void uniMatriz()// FUNÇÃO DE UNIÃO DE MATRIZES
{
    int vet[50],cont=0;
    memset(vet,'\0',50);
    system("cls");
    printf("Primeira Matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }
    printf("Segunda Matriz:\n");
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d] ",m2[i][j]);
        }
        printf("\n");

    }
    printf("====================================================================\nUNIÃO DAS MATRIZES\n====================================================================\n");
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            int rep = 0;
            for (int k = 0; k<cont&&rep==0; k++)
            {

                if (m[i][j]==vet[k])
                {
                    rep = 1;
                }
            }
            if (rep==0)
            {
                vet[cont] = m[i][j];
                cont++;
            }
        }
    }

    for (int i = 0; i < l1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            int rep = 0;
            for (int k = 0; k<cont&&rep==0; k++)
            {

                if (m2[i][j]==vet[k])
                {
                    rep = 1;
                }
            }
            if (rep==0)
            {
                vet[cont] = m2[i][j];
                cont++;
            }
        }
    }

    for (int k = 0; k<cont; k++)
    {
        printf("%d ",vet[k]);
    }
    printf("\n");
    getch();
    menup2();
}

void inMatriz()// FUNÇÃO DE INTERSECÇÃO - ERRO
{
    int vet[25],vet2[25],vet3[25];
    int k = 0, k2 = 0, k3 = 0, y = 0;
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            vet[k] = m[i][j];
            k++;
        }

    }
    for (int i = 0; i < l1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            vet2[k2] = m2[i][j];
            k2++;
        }
    }

    //CHECAGEM DE QUAL O MAIOR VETOR PARA USAR NO FOR

    if (k >= k2)
    {
        k3 = k;
    }
    else
    {
        k3 = k2;
    }

    //CHECANDO A INTERSECCAO

    for (int i = 0; i < k3; i++)
    {
        for (int j = 0; j < k3; j++)
        {
            if (vet[i] == vet2[j])
            {
                vet3[y] = vet[i];
                y++;
            }
        }
    }

    //TIRANDO OS NUMEROS IGUAIS

    for (int i = 0; i < y; ++i)
    {
        for (int j = i+1; j < y; ++j)
        {
            if (vet3[i] == vet3[j])
            {
                for (int m = j; m < y - 1; ++m)
                {
                    vet3[m] = vet3[m+1];
                }
            }
            y = y-1;
        }
    }


    system("cls");
    printf("Primeira Matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }
    printf("Segunda Matriz:\n");
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d] ",m2[i][j]);
        }
        printf("\n");
    }
    printf("====================================================================\n");
    printf("\n RESULTADO DA INTERSECCAO DAS DUAS MATRIZES : \n\n");
    printf("====================================================================\n");
    for (int i = 0; i < y; i++)
    {
        printf("%d ", vet3[i]);
    }
    printf("\n");
    getch();
    menup2();
}

void confM() //FUNÇÃO DE CONFIGURAÇÃO
{
    printf("QUANTIDADE MÁXIMA 5:\n");
    printf("[LINHAS]Primeira Matriz: ");
    scanf("%d",&l);
    if (l == 0)
    {
        printf("Operação Impossível\nPressione qualquer tecla para continuar");
        getch();
        menup();
    }
    printf("[COLUNAS]Primeira Matriz: ");
    scanf("%d",&c);
    if (c == 0)
    {
        printf("Operação Impossível\nPressione qualquer tecla para continuar");
        getch();
        menup();
    }
    system("cls");
    printf("[LINHAS]Segunda Matriz: ");
    scanf("%d",&l1);
    if (l1 == 0)
    {
        printf("Operação Impossível\nPressione qualquer tecla para continuar");
        getch();
        menup();
    }
    printf("[COLUNAS]Segunda Matriz: ");
    scanf("%d",&c1);
    if (c1 == 0)
    {
        printf("Operação Impossível\nPressione qualquer tecla para continuar");
        getch();
        menup();
    }
    if (c > 5 || l > 5 || c1 > 5 || l1 > 5)
    {
        printf("Operação Impossível\n NÃO PERMITIDO\nVALOR MÁXIMO 5\nPressione qualquer tecla para continuar");
        getch();
    }
    FConfig = 1;                                        //INFORMA QUE A CONFIGURAÇÃO FOI CRIADA
    menup();                                          //VOLTA PRO MENU
}

void qtdvmatriz()//FUNÇÃO DE VERIFICAÇÃO DE N VEZES
{
    system("cls");
    printf("Primeira Matriz:\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("[%d] ",m[i][j]);
        }
        printf("\n");
    }
    printf("Segunda Matriz:\n");
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("[%d] ",m2[i][j]);
        }
        printf("\n");
    }
    printf("====================================================================\n");
    int vezes, cont=0, cont2=0, total;
    printf("Digite um número(x) para verificar quantas vezes que x aparece nas matrizes\nx = ");
    scanf("%d",&vezes);
    printf("====================================================================\n");
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if( vezes == m[i][j])
            {
                cont++;
            }
        }
    }
    printf("====================================================================\n");
    printf("Na Primeira Matriz o numero %d repetiu  : %d vezes\n",vezes,cont);
    printf("====================================================================\n");
    for (int i = 0; i < l1; ++i)
    {
        for (int j = 0; j < c1; ++j)
        {
            if( vezes == m2[i][j])
            {
                cont2++;
            }
        }
    }
    printf("====================================================================\n");
    printf("Na Segunda Matriz o numero %d repetiu  : %d vezes\n",vezes,cont2);
    printf("====================================================================\n");

    total = cont+cont2;
    printf("====================================================================\n");
    printf("TOTAL: %d VEZES\n",total);
    printf("====================================================================\n");
    getch();
    menup2();
}

void main()  //Configurações iniciais programa...
{
    system("color 1F");
    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("MANIPULACAO E INTERACAO DE MATRIZES (Trabalho Final : Waldemar P. F. Silva)");
    menup();
}

