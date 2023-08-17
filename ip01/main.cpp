#include <stdio.h> //o include faz que eu consiga importar biblioteca para dentro do meu programa

using namespace std;

int main(){
    printf("hello world \n");

    // IP01 - Willian
    // ATV-01-
/*
    int  num1, num2, soma, sub, mult;
    float div;

    printf("insira um numero: ");
    scanf("%d", &num1);

    printf("insira um numero: ");
    scanf("%d", &num2); //%d ele prepara o código para esperar a leitura de uma variavel

    soma = num1 + num2;
    sub = num1 - num2;
    div = (float)num1 / (float) num2; //estamos convertendo as variaveis de int para float
    mult = num1 * num2;

    printf("A soma e: %d", soma);
    printf("\n A sub e: %d", sub);
    printf("\n A mult e: %d", mult);
    printf("\n A div e: %f", div);
*/
    //ATV-02
/*
    int  num1, num2, aux;

    printf("insira um numero: ");
    scanf("%d", &num1);

    printf("insira um numero: ");
    scanf("%d", &num2);

    aux = num1;
    num1 = num2;
    num2 = aux;

    printf("O valor do primeiro numero era: %d \n O segundo numero era: %d", aux, num1);
    printf("\nOs valores sao: primeiro: %d e o segundo: %d", num1, num2 );
    */

     //ATV-03
    /*
     int  num, num1, num2, num3;

     printf("Informe um numero:");
     scanf("%d", &num); // o & serve para demonstrar o lugar que a varivel vai ser guardada na memoria

    num1 = (num / 100);
    num2 = (num % 100) / 10;
    num3 = (num % 100) % 10;

    printf("\n numero invertido: %d%d%d", num3, num2, num1);
    */

    //ATV-05
    float  num1, num2;

    printf("insira um numero: ");
    scanf("%f", &num1);

    printf("insira um numero: ");
    scanf("%f", &num2);

   if (num1>num2){
        float maior = num1 - num2;
        printf("A diferenca e: %f", maior);
    }
    else {
        printf("O seguundo numero e maior,%f", num2);
    }

    return 0;
}
