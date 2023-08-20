#include <iostream>

using namespace std;

int main() {
    cout<<"Hello World\n";

//ATV-13
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

    return 0;
}
