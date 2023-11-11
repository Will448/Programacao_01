#include <iostream>

using namespace std;
//precisamos passar o endereço por meio dos ponteiros destas variaveis para chamar no metodo
void troca(int* a, int* b){
int aux = *a;
*a = *b;
*b = aux;

}


int main()
{
    cout << "Hello world!" << endl;
/*
   int a = 5;
   int b = 8;

    printf("A = %d e B: %d ", a, b);
    troca(&a, &b); //vai o & comercial para chamar esssa variaveis, deve se atentar que independente do nome foi igual, nem sempre são a mesma coisa

    printf("A = %d e B: %d", a, b);
*/
int n = 5; //uso está variavel para dizer que ele tera n elementos

int X[n] = {3, 5, 2, 7, 9};

//ordena
int ct = 0; //contabiliza a quantidade de instruções que a maquina executa no codigo

for(int j = 0; j < n; j++){
    ct++; // cada for x o outro, se faz 5x e o outo 4, entao tem 5*4 ou se não sabemos a quantidade é n*(n-1)

    for(int i = 0; i < n -1; i++){

    ct += 2;
        /*printf("%d : %d e %d => %d\n",
        i, X[i], X[i+1], X[i] > X[i+1]); //primeiro traz o indice, depois traz valor, depois traz valor e compara se ele é maior ou não com os dados anteriores
*/
            if(X[i] > X[i+1]){
                ct+=3;
            int aux = X[i];
            X[i] = X[i + 1];
            X[i + 1] = aux;

        }
    }
}
printf("\n------\n");


printf("Instrucoes: %d\n", ct);

printf("\n------\n");

for (int i = 0; i < 5; i++){

    printf("%d, ", X[i]);

}
    return 0;
}

/*

pedindo para o usuario

#include <iostream>

using namespace std;
//precisamos passar o endereço por meio dos ponteiros destas variaveis para chamar no metodo
void troca(int* a, int* b){
int aux = *a;
*a = *b;
*b = aux;

}


int main()
{
    cout << "Hello world!" << endl;
/*
   int a = 5;
   int b = 8;

    printf("A = %d e B: %d ", a, b);
    troca(&a, &b); //vai o & comercial para chamar esssa variaveis, deve se atentar que independente do nome foi igual, nem sempre são a mesma coisa

    printf("A = %d e B: %d", a, b);
*/
//--------------------------------------------------------------------------------------------------------------------------/
int n;
printf("Quantidade de numeros: " );
scanf("%d", &n);

//uso está variavel para dizer que ele terá n elementos
     int X[n] = {};

for(int i = 0; i < n; i++){

    printf("Digite os valores: ");
    scanf( "%d",&X[i]);
}



//ordena
int ct = 0; //contabiliza a quantidade de instruções que a maquina executa no codigo

for(int j = 0; j < n; j++){
    ct++; // cada for x o outro, se faz 5x e o outo 4, entao tem 5*4 ou se não sabemos a quantidade é n*(n-1)

    for(int i = 0; i < n -1; i++){

    ct += 2;
        /*printf("%d : %d e %d => %d\n",
        i, X[i], X[i+1], X[i] > X[i+1]); //primeiro traz o indice, depois traz valor, depois traz valor e compara se ele é maior ou não com os dados anteriores
*/
            if(X[i] > X[i+1]){
                ct+=3;
            int aux = X[i];
            X[i] = X[i + 1];
            X[i + 1] = aux;

        }
    }
}
printf("\n------\n");


printf("Instrucoes: %d\n", ct);

printf("\n------\n");

for (int i = 0; i < n; i++){

    printf("%d, ", X[i]);

}
    return 0;
}
*/
