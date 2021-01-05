#include <stdlib.h>
#include <stdio.h>
#include "funcoes.h"
#define true 1
#define false 0

typedef int TIPOCHAVE;

void main(){

    boolean verificador = true;
    int opcao;
    TIPOCHAVE chave;
    pont r = inicializarArvore();
    pont noh = NULL;
    while (verificador){
        //system("clear || cls");
        printf("================================ Bem Vindo ao menu Da Arvore Costurada Binaria de Busca Duplamente Encadeada ================================\n");
        printf("1- Inserir na Arvore\n");
        printf("2- Buscar na Arvore\n");
        printf("3- Remover da Arvore\n");
        printf("4- Visualizar Arvore em PreOrdem (Raiz, Esquesda, Direita)\n");
        printf("5- Visualizar Arvore em Ordem(Esquesda, Direita, Raiz)\n");
        printf("6- Sair do Menu\n");

        printf("Digite a opcao desejada: ");
        scanf("%d",&opcao);

        switch(opcao)
            {
                case 1:
                    printf("Digite o valor da chave a ser inserida: ");
                    scanf("%d", &chave);
                    noh = criaNovoNoh(chave);
                    r = inserir(r, noh);
                    break;

                case 2:
                    printf("Digite o valor da chave a ser buscada: ");
                    scanf("%d", &chave);
                    buscar(r, chave);
                    break;
                case 3:
                    printf("Digite o valor da chave a ser removida: ");
                    scanf("%d", &chave);
                    removeNoh(r, chave);
                    break;
                case 4:
                    printf("Arvore Em PreOrdem: ");
                    printPreordem(r);
                    break;
                case 5:
                    printf("Arvore Em Ordem: ");
                     pont n = nohMaisAEsquerda(r);
                    printEmOrdem(r, n);
                    break;
                case 6:
                    printf("Voce saiu da arvore, reinicia o projeto para ter acesso ao Menu de novo");
                    verificador = false;
            }
    }

    
}

