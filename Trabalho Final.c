#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

//FUNÇÕES E VARIÁVEIS GLOBAIS
int main(),matriz(),verMatriz(),somaMatriz(),subMatriz(),uniMatriz(),inMatriz(),menup(),confM();
int menu,i=0,j=0,l=0,c=0,p=0,l1=0,c1=0,k=0,rep=0;
int m[5][5],m2[5][5],sm[5][5];
int vet[25], k2 = 0, k3 = 0, vet2[25], vet3[25], y = 0, cont=0;
int FConfig=0,aux=0;

int main(){
    system("color 1F");
    SetConsoleTitle("Trabalho Final : Waldemar P. F. Silva");
    setlocale(LC_ALL, "Portuguese");
    menup();

}


int menup(){//FUNÇÃO MENU
    system("cls");
    menu = 99;//LIMPAR VAR MENU
    printf("BEM VINDO(A)\n");
        if (FConfig == 1){//Verifica se a matriz foi configurada
    printf("====================================================================\n");
    printf("MENU:\n1: Configurar tamanho das matrizes[PREENCHIDO]:\n2: Adicionar Dados as Matrizes[NÃO PREENCHIDA]:\n3: Manipular Matrizes[INDISPONÍVEL]\n");
    printf("====================================================================\n");
        if (p != 0){//Se a matriz tiver configurada aparece no menu as 2 matrizes preenchidas, caso contrario fica oculta
            system("cls");
printf("Primeira Matriz:\n");
    for (i = 0; i < l; i++){                        //PREENCHE A MATRIZ
        for (j = 0; j < c; j++){
            printf("[%d] ",m[i][j]);
        }
    printf("\n");
    }
printf("Segunda Matriz:\n");
    for (i = 0; i < l1; i++){                        //PREENCHE A MATRIZ
        for (j = 0; j < c1; j++){
            printf("[%d] ",m2[i][j]);
        }
    printf("\n");
    }

    printf("====================================================================\n");
    printf("MENU:\n1: Configurar tamanho das matrizes[PREENCHIDO]:\n2: Adicionar Dados as Matrizes[PREENCHIDO]:\n3: Manipular Matrizes[DISPONÍVEL]\n");
    printf("====================================================================\n");

        }
        }else{
    printf("====================================================================\n");
    printf("MENU:\n1: Configurar tamanho das matrizes[NÃO PREENCHIDO]:\n2: Adicionar Dados as Matrizes[NÃO PREENCHIDO]:\n3: Manipular Matrizes[INDISPONÍVEL]\n");
    printf("====================================================================\n");
    }

    scanf("%d",&menu);                                    //RECEBE NUMERO DO MENU
    switch ( menu ){
    case 1:                                              //MENU DE CONFIGURAÇÃO DE MATRIZ
        system("cls");                                  //LIMPA O CONSOLE
        menu = 99;
        if (FConfig == 1){// VERIFICA SE O USUARIO JA FEZ UMA CONFIGURACAO, SE SIM PERGUNTA SE QUER ALTERAR.
            printf("Deseja alterar os valores?\n 1 SIM , 2 NÃO\n");
            scanf("%d",&menu);
            if (menu == 1){
                system("cls");
            return confM();              // RECONFIGURA PARAMETROS DAS MATRIZES
            }else{
            return menup();                                     //RETORNA MENU PRINCIPAL
            }
        }
        return confM();                 // CONFIGURA PARAMETROS DAS MATRIZES
    case 2:                                             //CHAMA A FUNÇÃO QUE PREENCHE A MATRIZ
        system("cls");                                  //LIMPA O CONSOLE
        if (FConfig == 0){ //VERIFICA SE FOI COFINGURADO A MATRIZ
           system("cls");
            printf("Operação Impossível, Matriz não configurada\nPressione qualquer tecla para continuar\n");
            getch();                                 //PAUSE LIMPO
            return menup();                                 //VOLTA PRO MENU
        }
        if (p == 1){
            menu = 99;
            printf("Deseja alterar a Matriz ?\n 1 SIM , 2 NÃO\n");
            scanf("%d",&menu);// DA A OPCAO PRO USUARIO REFAZER A MATRIZ
        if (menu == 1){
            return matriz();// SE O USUARIO DIGITA 1 ENTAO CHAMA A FUNCAO DE ALTERAR A MATRIZ
        }else {
        return menup();
        }
        }
        return matriz();
    case 3:
                if (FConfig == 0){                            //VERIFICA SE FOI COFINGURADO A MATRIZ
            printf("Operação Impossível, Matriz não configurada\nPressione qualquer tecla para continuar");
            getch();                                 //PAUSE LIMPO
            return menup();                                 //VOLTA PRO MENU
        }
        menu = 99;
        system("cls");
    printf("====================================================================\n");
    printf("MENU\n");
    printf("1: SOMAR AS MATRIZES\n2: SUBTRAIR AS MATRIZES\n3: UNIR MATRIZES\n4: INTERSECÇÃO DE MATRIZ\n0: VOLTAR AO MENU ANTERIOR\n");
    printf("====================================================================\n");
    scanf("%d",&menu);
    if (menu == 0){//INICIO SWITCH
        return menup();
    }
    else if (menu == 1){
        return somaMatriz();    for (i = 0; i < l; i++){                        //SOMA MATRIZES
        for (j = 0; j < c; j++){
            sm[i][j] = m[i][j]+m2[i][j];
        }
    }
    for (i = 0; i < l; i++){                        //IMPRIME MATRIZ SOMADA
        for (j = 0; j < c; j++){
            printf("[%d] ",sm[i][j]);
        }
    printf("\n");
    }
    }
    else if (menu == 2){
        return subMatriz();//CHAMA FUNCAO SUBTRACAO
    }
    else if (menu == 3){
        return uniMatriz();// CHAMA FUNCAO UNIFICAR MATRIZ
    }
    else if (menu == 4){
        return inMatriz();// CHAMA FUNCAO DE INTERSECCAO DE MATRIZ
    }
    case 9:
        system("cls");
        printf("Obrigado por usar meu programa\nPara fechar, pressione qualquer tecla de seu teclado.");
        getch();
        exit(0);

    default:
        system("cls");
        printf("Opção Inválida");
        getch();
        return menup();
    }//FIM SWITCH
}



int matriz(){//PREENCHE MATRIZ                                 FUNCIONANDO
    system("cls");
    printf("Preencha a primeira matriz:\n");
    for (i = 0; i < l; i++){                        //LOOP
        for (j = 0; j < c; j++){
            scanf("%d",&m[i][j]);                   //GRAVA NA MATRIZ
        }
    }
    system("cls");
        printf("Preencha a segunda matriz:\n");
    for (i = 0; i < l1; i++){                        //LOOP
        for (j = 0; j < c1; j++){
            scanf("%d",&m2[i][j]);                  // GRAVA NA MATRIZ
        }
    }
    p = 1;                                          //INFORMA AO PROGRAMA Q A MATRIZ FOI PREENCHIDA

    system("cls");                                  //LIMPA O CONSOLE
    menup();
}

int somaMatriz(){//SOMA MATRIZ                                 FUNCIONANDO
    system("cls");
    if (c == c1 && l == l1){
    printf("SOMA:\n");
    for (i = 0; i < l; i++){                        //SOMA MATRIZES
        for (j = 0; j < c; j++){
            sm[i][j] = m[i][j]+m2[i][j];
        }
    }
    for (i = 0; i < l; i++){                        //IMPRIME MATRIZ SOMADA
        for (j = 0; j < c; j++){
            printf("[%d] ",sm[i][j]);
        }
    printf("\n");
    }

getch();
}else{
printf("Operação Impossível\nPressione qualquer tecla para continuar");//ERRO
getch();
}
menup();
}

int subMatriz(){//subtracao                                 FUNCIONANDO
    if (c == c1 && l == l1){
    system("cls");
    menu = 99;
    printf("[1] MATRIZ 1 - MATRIZ 2\n[2] MATRIZ 2 - MATRIZ 1\n"); // SUBMENU SUBTRACAO
    scanf("%d", &menu);
    if (menu == 1){
            system("cls");
            printf("MATRIZ 1 - MATRIZ 2\n");
    for (i = 0; i < l; i++){                        //LOOP DE CONTA M - M2
        for (j = 0; j < c; j++){
            sm[i][j] = m[i][j]-m2[i][j];
        }
    }
    for (i = 0; i < l; i++){                        //LOOP IMPRESSAO
        for (j = 0; j < c; j++){
            printf("[%d] ",sm[i][j]);
        }
    printf("\n");
    }
}
else if (menu == 2){
        system("cls");
     printf("MATRIZ 2 - MATRIZ 1\n");
     for (i = 0; i < l; i++){                        //LOOP M2 - M1
        for (j = 0; j < c; j++){
            sm[i][j] = m2[i][j]-m[i][j];
        }
    }
    for (i = 0; i < l; i++){                        //LOOP IMPRESSAO
        for (j = 0; j < c; j++){
            printf("[%d] ",sm[i][j]);
        }
    printf("\n");
    }
}
}
else{
        system("cls");
    printf("Operação Impossível\nPressione qualquer tecla para continuar");//ERRO
    getch();
}
getch();
return menup(); //RETORNO MENU
}

int uniMatriz(){// ERRO
    memset(vet,'0',25);
    for (i = 0; i < c; ++i){                    // LOOP
        for (j = 0; j < l; ++j){
             rep = 0;
        for (k = 0; k < cont && rep == 0; ++k){ // LOOP
            if (m[i][j]==vet[k]){               //VERIFICA SE A MATRIZ NA POSICAO E IGUAL AO ULTIMO NUMERO NO VETOR
                rep = 1;
            }
        }
        if (rep == 0){                          // SE NAO E REPETIDO GRAVA E ACRESCENTA O CONTADOR
            vet[cont]=m[i][j];
            cont = cont+1;
        }
    }
}

    for (i = 0; i < c1; ++i){

        for (j = 0; j < l1; ++j){
        rep = 0;
            for (k = 0; k < cont && rep == 0; ++k){
                if (m2[i][j]==vet[k]){
                    rep = 1;
                }
                if (rep == 0){
                    vet[cont] = m2[i][j];
                    cont = cont +1;
                }
            }
        }
    }
    for (k = 0; k < cont; k++){
        printf("%d ", vet[k]);                  // IMPRIME O VETOR
    }
    printf("\n");
    system("pause");
    menup();
}

int inMatriz(){ // ERRO

                        for (int i = 0; i < l; ++i){
                            for (int j = 0; j < c; ++j){
                                vet[k] = m[i][j];
                                k++;
                            }
                        }
                        for (int i = 0; i < l1; ++i){
                            for (int j = 0; j < c1; ++j){
                                vet2[k2] = m2[i][j];
                                k2++;
                            }
                        }

                        if (k >= k2) {//checa qual vet maior p usar no for
                            k3 = k;
                        }
                        else
                        {
                            k3 = k2;
                        }

                        //CHECANDO A INTERSECCAO

                        for (int i = 0; i < k3; i++){
                            for (int j = 0; j < k3; j++){
                                if (vet[i] == vet2[j]){
                                    vet3[y] = vet[i];
                                    y++;
                                }
                            }
                        }

                        //TIRANDO OS NUMEROS IGUAIS

                        for (int i = 0; i < y; ++i){
                            for (int j = i+1; j < y; ++j){
                                if (vet3[i] == vet3[j]){
                                    for (int m = j; m < y - 1; ++m){
                                        vet3[m] = vet3[m+1];
                                    }
                                }
                                y = y-1;
                            }
                        }
                        system("cls");
                        printf("\n RESULTADO DA INTERSECCAO DAS DUAS MATRIZES : \n\n");

                        for (int i = 0; i < y; i++){
                            printf("%d   ", vet3[i]);
                        }
                        printf("\n");
                        system ("pause");
                        return menup();
                    }

int confM(){ // configura matriz                                 FUNCIONANDO
printf("QUANTIDADE MÁXIMA 5:\n");
        printf("[LINHAS]Primeira Matriz: ");
        scanf("%d",&l);
            if (l == 0){
            printf("Operação Impossível\nPressione qualquer tecla para continuar");
            getch();
            menup();
        }
        printf("[COLUNAS]Primeira Matriz: ");
        scanf("%d",&c);
        if (c == 0){
            printf("Operação Impossível\nPressione qualquer tecla para continuar");
            getch();
            return menup();
        }
        system("cls");
                printf("[LINHAS]Segunda Matriz: ");
        scanf("%d",&l1);
            if (l == 0){
            printf("Operação Impossível\nPressione qualquer tecla para continuar");
            getch();
            menup();
        }
        printf("[COLUNAS]Segunda Matriz: ");
        scanf("%d",&c1);
        if (c == 0){
            printf("Operação Impossível\nPressione qualquer tecla para continuar");
            getch();
            return menup();
        }
            if (c > 5 || l > 5 || c1 > 5 || l1 > 5){
            printf("Operação Impossível\n NÃO PERMITIDO\nVALOR MÁXIMO 5\nPressione qualquer tecla para continuar");
            getch();
        }
        system("cls");
        FConfig = 1;                                        //INFORMA QUE A CONFIGURAÇÃO FOI CRIADA
        return menup();                                          //VOLTA PRO MENU
}
