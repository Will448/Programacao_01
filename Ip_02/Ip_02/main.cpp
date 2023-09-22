#include <iostream>
#include <string>
using namespace std;

struct Tarefa{
    char descricao[50];  //lista de tarefas em uma estrutura de dados
    int prioridade = -1; //determina que não há prioridades

    void imprimir(){
    printf("- %s (%d) \n",
                descricao, prioridade); // crio uma estrutura que realiza a chamada dos dados e depois chamos elas
    }
};

int main()
{
    cout << "Hello world!" << endl;
/*faça um programa que leia uma lista de tarefas e imprima*/

    struct Tarefa listTarefas[10]; // reservo um determinado espaço de 10 posições e assim vai ter a prioridade
    // cada tarefa terá uma descrição e uma prioridade pois chamamos a estrutura aqui

    int posicao = 0; //é usada para determinar a posição que a tarefa sera alocada na memoria

    while(1){ //while sempre infinito pois a condição 1 é verdadeira
        printf("Tarefas");
        printf("\t1.adicionar\n");
        printf("\t2.imprimir\n"); // criamos o menu do programa com as opções indicadas por t1, t2 e t3
        printf("\t3.sair\n");
        printf("Opcao: ");

        int opcao = 0;
        scanf("%d", &opcao);
        fflush(stdin);  //realiza a limpeza do teclado e assim força a leitura

        printf("\n");

        switch(opcao){
            case 1: //adicionar
                printf("Nova tarefa: ");
                //scanf("%s",listTarefas[posicao].descricao); //guarda os valores no array e inicia no 0 -- uma maneira de fazer
                gets(listTarefas[posicao].descricao); // acessa a estrutura e sua posição alem de buscar a descricao com a concatenaçao
                printf("\nPrioridade: (1, 2, 3)");
                scanf("%d", &listTarefas[posicao].prioridade);
                posicao++; // incrementa a posicao  ate chegar ao tamanho do array
            break;
            case 2: //imprimir
                int i;
                for(i = 0; i < posicao; i++){
                  // uma maneira de ser feita  printf("%s", listTarefas[i].c_str()); // para fazer a impressao de strings precisamos fazer a conversao, chamando os indices
                  listTarefas[i].imprimir();

                }
            break;

            case 3:
                printf("Você saiu da aplicacao");
            break;
        }

    }



    return 0;
}
