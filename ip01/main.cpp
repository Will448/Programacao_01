#include <stdio.h> //o include faz que eu consiga importar biblioteca para dentro do meu programa

using namespace std;

int main(){
    printf("hello world \n");

    // IP01 - Willian
    // ATV-01-
/*
    float  num1, num2, soma, sub, mult;
    float div;

    printf("insira um numero: ");
    scanf("%f", &num1);

    printf("insira um numero: ");
    scanf("%f", &num2); //%d ele prepara o código para esperar a leitura de uma variavel tipo inteira e %f para float

    soma = num1 + num2;
    sub = num1 - num2;
    div = (float)num1 / (float) num2; //estamos convertendo as variaveis de int para float
    mult = num1 * num2;

    printf("A soma e: %f", soma);
    printf("\n A sub e: %f", sub);
    printf("\n A mult e: %f", mult);
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

    num1 = (num / 100); //centena
    num2 = (num % 100) / 10; //dezena
    num3 = (num % 100) % 10; // unidade

    printf("\n numero invertido: %d %d %d", num3, num2, num1);
    */

    //ATV-05
    /*
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
    */
    
//ATV-06
/*Ler dois valores inteiros (variáveis A e B) e apresentar a adição destes valores, quando a variável
A for maior que B, caso contrário, efetuar a multiplicação das variáveis.

int a, b;

printf("digite um valor inteiro: ");
scanf("%d", &a);

printf("digite um valor inteiro: ");
scanf("%d", &b);

if (a > b) {

    printf("Soma: %d", (a + b) );
}else{
    printf("Multiplicacao: %d", a * b); //nesta linha nós estamos realizando o camando que prepara o código para ler dois itens após a virgula, ou seja as variaveis ou antes da virgula
}
*/
/* ATV-07 Ler um valor inteiro que representa o mês de uma data e apresentar o trimestre correspondente. 


int mes;

printf("digite o trimestre: ");
scanf("%d", &mes);

if(mes <= 3){
    printf("esta no primeiro trimestre.");
} else if(mes >= 4 && mes <= 6){
    printf("esta no segundo trimestre.");
} else if (mes >= 7 && mes <= 10){
    printf("esta no terceiro trimestre.");
}else if (mes >= 10 && mes <= 12){
    printf("esta no quarto trimestre.");
}else{
    printf("Opcao invalida");
}
    */

/* ATV-08 Construa um algoritmo que leia três valores inteiros e os coloque em ordem crescente. */
/*

 int  num1, num2, num3; //usa-se %s para ler texto

    printf("insira um numero: ");
    scanf("%d", &num1);

    printf("insira um numero: ");
    scanf("%d", &num2);

    printf("insira um numero: ");
    scanf("%d", &num3);

if(num1 > num2 && num2 > num3 ){
    printf("a sequencia: %d %d %d", num3, num2, num1);
} else if(num1 > num3 && num3 > num2 ){
    printf("A ordem crescente e: %d %d %d\n",num2,num3,num1);
}else if(num2 > num3 && num3 > num1){
    printf("A ordem crescente e: %d %d %d\n",num1,num3,num2);
}else if(num3 > num2 && num2 > num1){
    printf("A ordem crescente e: %d %d %d\n",num1,num2,num3);
}else if(num3 > num1 && num1 > num2){
    printf("A ordem crescente e: %d %d %d\n",num2,num1,num3);
}   else if(num2 > num1 && num1 > num3){
    printf("A ordem crescente e: %d %d %d\n",num3,num1,num2);
}else{
    printf("Aqui");
}
*/
//ATV-9
/*    
 int  num1, num2, num3;

printf("insira um numero: ");
scanf("%d", &num1);

printf("insira um numero: ");
scanf("%d", &num2);

printf("insira um numero: ");
scanf("%d", &num3);

if (num1 > num2 && num1 > num3) {
    printf("maior1");
}else if (num2 > num3 && num2 > num1) {
    printf("maior2");
}else if (num3 > num1 && num3 > num2) {
    printf("maior2")
    } else {
    printf("Nenhuma das alternativas a seguir foi validada");
}
    */
    return 0;
}
