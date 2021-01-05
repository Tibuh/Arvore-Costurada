#ifndef REGISTROS_H_
#define REGISTROS_H_
#define true 1
#define false 0

typedef int TIPOCHAVE;
typedef int boolean;

typedef struct reg {
      TIPOCHAVE chave;
      struct reg *esq;
      struct reg *dir;
      boolean dirCostura, esqCostura;
} noh;

//=========================================Chamada das Funcoes=========================================
typedef noh* pont;
pont inicializarArvore();
boolean arvoreVazia(pont raiz);
pont criaNovoNoh(TIPOCHAVE ch);
//void buscar(pont raiz, TIPOCHAVE chave);
pont buscaNohParaInserir(pont raiz, TIPOCHAVE ch);
pont buscaNoh(pont raiz, TIPOCHAVE ch, pont *pai);
pont inserir(pont raiz, pont novoNoh);
pont removeNoh(pont raiz, TIPOCHAVE ch);
pont emOrdemSucessor(pont p);
pont ordemPredecessor(pont r);
pont nohMaisAEsquerda(pont raiz);
pont ordemSucessor(pont s);
void emOrdem(pont raiz, pont n);
void imprimePreOrdem(pont raiz);
void imprimePosOrdem(pont raiz);
pont casoA(pont raiz, pont pai, pont atual);
pont casoB(pont raiz, pont pai, pont atual);
pont casoC(pont raiz, pont pai, pont atual);
pont buscaNohParaInserir(pont raiz, TIPOCHAVE ch);

#endif