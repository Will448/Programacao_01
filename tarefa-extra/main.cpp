#include <iostream>

using namespace std;

void interfacePrograma(char* adivinha, int tamanho);
void imprimeTentativa(int tentativas, int ctErros, char* erros);

char lerTentativa(); //lê a palavra colocada pelo usuario
int verifica( char* palavraSecreta, char* adivinha, int tamanho, int* ctErros, char* erros, char c); //pega todos os atributos e faz a vericacao se letra colocada existe ou nao
// temos a passagem de dados por meio de referencia-- ctErros e também por valor -- tamanho
int main()
{
    cout << "Hello world!" << endl;

    int tamanho = 8;
    char* palavraSecreta = "epifania"; // o * significa um ponteiro -- sendo que ponteiros são tipos de dados e também apontam para endereços de memorias
    char* adivinha = "________";

    int tentativas = tamanho * 2, ctErros = 0; //o dobro da quantidade da palavra
    char* erros; //verifica a quantidade de erros/tetntativa via parametro

    while(tentativas > 0){


    interfacePrograma(adivinha, tamanho);

    imprimeTentativa(tentativas, ctErros, erros);

    char c = lerTentativa();

    verifica(palavraSecreta, adivinha, tamanho, &ctErros, erros, c);

    printf("\n----------------------------------------------------\n");

    tentativas --; //diminui a quantidade de trntativas fazendo a repeticao pelo while

    }
    return 0;
}

void interfacePrograma(char* adivinha, int tamanho){

    printf("--Jogo da forca \n");
    printf("Palavra: ");

    int i;

    for(i = 0; i < tamanho; i++){

        printf("%c ", adivinha[i]); //aponta para o array de caracteres da palavra secreta e assim percorre todos os indices
    };

};

void imprimeTentativa(int tentativas, int ctErros, char* erros){

    printf("\n Voce tem %d tentativas.", tentativas );
    printf("\n Erros: ");

    int i;

    for(i = 0; i < ctErros; i++){

        printf("%c ", erros[i]);//aponta para o array para verificar a quantidade de erros
    };
};

char lerTentativa(){

    printf("\n Digite uma letra (min): " );
    fflush(stdin);
    char c;
    scanf("%c", &c);
    return c;

}

int verifica( char* palavraSecreta, char* adivinha, int tamanho, int* ctErros, char* erros, char c){

    int i, acertou = 0;

    for(i = 0; i < tamanho; i++){

        if(palavraSecreta[i] == c){ //verifica se acertou o caractere do indice

            adivinha[i] = palavraSecreta[i];
            acertou = 1; //caso tenha acertado o valor de acerto muda para 1,caso erre ele volta para 0-procximo if
        }

    };
        if(!acertou){

            erros[*ctErros] = c; //coloca o caractere que ele digitou para o contador de erros, indo para o proximo endereco de memoria
            *ctErros = *ctErros + 1; //ele aponta para o endereco que esta o ponteiro e incrementa o valor existente na memoria
        }
             return acertou;
};
