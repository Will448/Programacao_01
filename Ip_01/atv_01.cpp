#include <stdio.h> //o include faz que eu consiga importar biblioteca para dentro do meu programa

using namespace std;

int main(){
    printf("hello world \n");

    // IP_01 - Willian Bongiovanni -- Sistemas de informação-2°período

// ATV-01- Ler dois valores inteiros (variáveis A e B) e efetuar as operações de adição, subtração,
//multiplicação e divisão de A por B, apresentando ao final os quatro resultados obtidos.
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
//ATV-02-Ler dois valores para as variáveis A e B, efetuar a troca dos valores de forma que a variável A
//passe a possuir o valor da variável B e que a variável B passe a possuir o valor da variável A. Apresentar os valores trocados. 

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

//ATV-03-Dado um número inteiro de 3 algarismos, inverter a ordem de seus algarismos. Os três algarismos
//do número dado são diferentes de zero. Utilize os operadores / e %.
    /*
     int  num, num1, num2, num3;

     printf("Informe um numero:");
     scanf("%d", &num); // o & serve para demonstrar o lugar que a varivel vai ser guardada na memoria

    num1 = (num / 100); //centena
    num2 = (num % 100) / 10; //dezena
    num3 = (num % 100) % 10; // unidade

    printf("\n numero invertido: %d %d %d", num3, num2, num1);
    */

//ATV-04-Efetuar a leitura de um valor inteiro positivo ou negativo e apresentar o número lido como sendo
//um valor positivo, ou seja, o programa deverá apresentar o módulo de um número fornecido.
//Lembre-se de verificar se o número fornecido é menor que zero, sendo multiplique-o por –1.
    /*
    float valor, aux;
    int num = -1;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if(valor < 0){
        aux = valor * num;
        printf("O modulo e: %.1f", aux);
    } else{
        printf("O modulo e: %.1f", valor);
    }

//ATV-05- Ler dois valores numéricos e apresentar a diferença do maior pelo menor. 
    /*
    float  num1, num2;

    printf("insira um numero: ");
    scanf("%f", &num1);

    printf("insira um numero: ");
    scanf("%f", &num2);

   if (num1>num2){
        float maior = num1 - num2;
        printf("A diferenca e: %f", maior);
    }else {
        printf("O seguundo numero e maior,%f", num2);
    }
    */
*/
//ATV-06
//Ler dois valores inteiros (variáveis A e B) e apresentar a adição destes valores, quando a variável
//A for maior que B, caso contrário, efetuar a multiplicação das variáveis.
/*
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
//ATV-07 Ler um valor inteiro que representa o mês de uma data e apresentar o trimestre correspondente. 
/*
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

// ATV-08 Construa um algoritmo que leia três valores inteiros e os coloque em ordem crescente. 
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
//ATV-9-Efetuar a leitura de três números inteiros e apresentar o maior valor. 
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
//ATV-10-Efetuar a leitura de três números inteiros e apresentar o maior e o menor valor. 
    /*
    int  num1, num2, num3; //usa-se %s para ler texto

    printf("insira um numero: ");
    scanf("%d", &num1);

    printf("insira um numero: ");
    scanf("%d", &num2);

    printf("insira um numero: ");
    scanf("%d", &num3);

if(num1 > num2 && num2 > num3 ){
    printf("o maior: %d o menor: %d", num1, num3);
} else if(num1 > num3 && num3 > num2 ){
    printf("o maior: %d o menor: %d", num1,num2);
}else if(num2 > num3 && num3 > num1){
    printf("o maior: %d o menor: %d", num2,num1);
}else if(num3 > num2 && num2 > num1){
    printf("o maior: %d o menor: %d", num3,num1);
}else if(num3 > num1 && num1 > num2){
    printf("o maior: %d o menor: %d", num3,num2);
}   else if(num2 > num1 && num1 > num3){
    printf("o maior: %d o menor: %d", num2,num3);
}else{
    printf("Opcao invalida");
}
    */

//ATV-11
//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
//para homens: (72.7 * h) - 58; para mulheres: (62.1 * h) - 44.7.

/*
float  altura_h, altura_m, peso_h, ideal_h, peso_m, ideal_m;
int val;
    printf("Para homem digite 1:\nPara mulher digite 2: ");
    scanf("%d", &val);

switch (val) {
case 1:

printf("Opcao escolhida: %d-Homem ", val);

printf("\nDigite sua altura: ");
    scanf("%f", &altura_h);

    peso_h = 72.7 * altura_h;
    ideal_h = peso_h - 58;

printf("\nPeso ideal: %.2f", ideal_h);

break;

case 2:

printf("Opcao escolhida: %d-Mulher ", val);

printf("\nDigite sua altura: ");
    scanf("%f", &altura_m);

    peso_m = 62.1 * altura_m;
    ideal_m = peso_m - 44.7;

printf("Peso ideal: %.2f ", ideal_m);
break;

default :
printf("Você escolheu uma opção inválida!\n");
}
*/
// ATV- 12- Elabore um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
//infantil A = 5 - 7 anos
//infantil B = 8 - 10 anos
//juvenil A = 11 - 13 anos
//juvenil B = 14 - 17 anos 
//sênior = maiores de 17 anos
/*
    
int idade;

printf("Digite a sua idade: ");
scanf("%d", &idade);

if(idade <= 0){
    printf("idade invalida");
} else{
if (idade >= 5 && idade <=7) {
    printf("Categoria A - Infantil\n");
} else if (idade >= 8 && idade <=10) {
    printf("Categoria B - Infantil\n");
} else if (idade >= 11 && idade <=13) {
    printf("Categoria A - Juvenil\n");
} else if (idade >= 14 && idade <=17) {
    printf("Categoria B - Juvenil\n");
} else if (idade >= 18) {
    printf("Categoria Senior\n");
} else {
    printf("A idade digitada nao corresponde a nenhuma categoria\n");
}

}  

#include <iostream>

using namespace std;

int main() {
    cout<<"Hello World\n";

//ATV-13- Apresentar os resultados da tabuada de um número qualquer. 
/*
int valor, aux;
int contador = 1; 

printf("Digite um numero: ");
scanf("%d", &valor);

for ( contador = 1; contador <= 10; contador++){
    aux = valor * contador;
 // outra forma de fazer: printf("Os resultados: %d\n", valor * contador);
printf(" A tabuada do valor: %d * %d = %d\n", valor, contador, aux);
}
*/
//ATV-14- Apresentar os quadrados dos números inteiros de 15 a 35.
/*
int i, quadrado;

printf("Quadrado dos números de 15 a 35\n");
printf("\n");
for (i=15; i<=35; i++) {  
    quadrado = i*i;
    printf("O quadrado de %d eh igual a %4d\n", i, quadrado);
  }
 */   
//ATV-15
/*
int valor; 
int fat = 1;
int contador = 1; 

printf("Digite um numero: ");
scanf("%d", &valor);

while ( contador <= valor ) {
    fat *= contador;
    contador ++;
    printf("O fatorial: %d -- %d\n", contador, fat);
} 
printf("O fatorial do valor e: %d\n", fat);
*/

//ATV-16-Apresentar a soma de todos os números divisíveis por 4 entre 40 e 200.
    /*
int i = 40; // variavel de controle
int soma = 0; // somatorio, e recomendado iniciar com 0 as variaveis

 while (i <= 200) {
   soma = soma + i;
   i = i + 4; // contador dos numeros inteiros "i" 
 }

 printf("A soma dos números divisíveis por 4 entre 40 e 200\n");

 printf("Soma = %d", soma);
 */
//ATV-17
//A conversão de graus Fahrenheit para centígrados é obtida pela fórmula C=5/9(F-32). Escreva um
//algoritmo que calcule e escreva uma tabela de graus centígrados em função de graus Fahrenheit que variem de 50 a 150 de 1 em 1. 
/*
float temp_final;
int temp_far;

for (temp_far = 50; temp_far <= 150; temp_far++) {
    float val_div = float(5)/9; // float(5) determina que a divisão dos inteiros 5 e 9 seja "exata"
    temp_final = val_div * (temp_far - 32); 

    printf("%3d graus Fahrenheit = %5.2f centígrados.\n", temp_far, temp_final);
}
 */
//ATV-18-Fulano tem 1,50 metro e cresce 2 centímetros por ano, enquanto Ciclano tem 1,10 metro e cresce 3
//centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessário para que Ciclano seja maior que Fulano
/*
float alt_fulano = 1.50, alt_ciclano = 1.10;
int qtd_anos = 0;

while (alt_fulano >= alt_ciclano) {
    alt_fulano = alt_fulano + 0.02;
    alt_ciclano = alt_ciclano + 0.03;
    qtd_anos = qtd_anos + 1;
}

printf("Altura de Fulano  = %.2f\n", alt_fulano);
printf("Altura de Ciclano = %.2f\n", alt_ciclano);

printf("\nSerão necessários %d anos para que Fulano seja maior que Ciclano.", qtd_anos);
*/

//ATV-19-Fulano aplicou R$ 100,00 com rendimento de 5% ao mês. Quantos meses serão necessários para o capital investido ultrapasse a R$ 200,00. 
/*
float juro, capital = 100;
int mes = 0;

  while (capital <= 200.00) {
    juro = capital * (5 / 100.00);
    capital = capital + juro;
    mes = mes + 1;
  }

  printf("Em %d meses o capital investido será de R$ %.2f", mes, capital);
*/
//ATV-20-Fulano realizou um empréstimo bancário de R$ 10.000,00 que deverão ser pagos em 24 mesescom juros de 2% ao mês,
//incluídos já na primeira parcela. Determine e apresente o valor da última parcela e o montante pago ao final do empréstimo. 
/*
  float parcela,juro, total_emp = 0;
    int i;
  parcela = 10000.00 / 24; // parcela inicial

  for (i=1; i<=24; i++) {
    juro = parcela * (2 / 100);
    parcela = parcela + juro;
    total_emp = total_emp + parcela;
    printf("%2d° parcela, R$ %7.2f\n", i, parcela);
  }

  printf("\n\nValor da última parcela R$ %.2f", parcela);
  printf("\n\nTotal Pago R$ %.2f", total_emp);
*/

//ATV-21-A série de Fibonacci é formada pela seqüência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ..., etc. Escreva um
//algoritmo que gere a série de Fibonacci até o vigésimo termo. 
/*
int termo1 = 1, termo2 = 1, novoTermo;

  for (int i=3; i<=20; i++) {
    novoTermo = termo1 + termo2; 
    printf("%2do. termo = %d\n", i, novoTermo);

    termo1 = termo2;	// o segundo termo é o primeiro termo no próximo passo
    termo2 = novoTermo; // o novo termo é o segundo termo no próximo passo
  }
*/
//ATV-22- Ler um número inteiro e determinar se ele é primo. Obs. um número é primo quando for divisível somente por 1 e por ele mesmo. 
/*
int num, i;
int resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       printf("%d é um número primo\n", num);
       break;
    }else
    printf("%d não é um número primo\n", num);
    break;
 }
*/
//ATV23-Apresentar todos os números primos entre 5 e 1700. 
    /*
int i;
int resultado = 0;
int val = 5;
while(val < 1700){
    val ++;
    for (i = 2; i <= val / 2; i++) {
        if (val % i == 0) {
           resultado++;
           printf("%d é um número primo\n", val);
           break;
        }   
    }
}
    */
return 0;
}
