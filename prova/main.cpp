#include <iostream>
#include <string>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

struct Funcionario{

    string nome;
    int idade;
    string departamento;
    int num_tel;

};

struct Calendario{

    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;

};

int main()
{
    cout << "Hello world!" << endl;

/*
//Q10-  Apresentar os resultados de uma tabuada de um numero qualquer.
    int num, mult;
    int i = 0;

    printf("Digite o valor da tabuada");
    scanf("%d", &num);

    for(i=1; i <= 10; i++){
        mult = num * i;
        printf(" A tabuada do valor digitado e: %d * %d = %d\n", num, i, mult);

    };
*/

/*
    //Questão 12: Crie uma estrutura de dados para armazenar informações sobre funcionários de uma empresa, incluindo nome, idade, salário, departamento e num de telefone
    Funcionario func;


    printf("digite os dados do funcionario: \n");

    printf("Nome: ");
    getline( cin, func.nome);
    system("cls");

    printf("\n Departamento: ");
    getline( cin, func.departamento);
    system("cls");

    printf("\n Idade: ");
    scanf( "%d", &func.idade);
    system("cls");

    printf("Numero de telefone: ");
    scanf( "%d", &func.num_tel);
    system("cls");


    printf("Seu dados sao:\n Nome: %s \n Idade: %d \n Departamento: %s \n Numero de telefone: %d ", func.nome.c_str(), func.idade, func.departamento.c_str(), func.num_tel );
*/

// Q11- Crie uma estrutura de dados para representar uma data com dia, mes, ano, horas e segundos. Implemente um metodo na estrutura ue converta para texto.
/*    Calendario dta;

    dta.dia = 29;
    dta.mes = 9;
    dta.ano = 2023;
    dta.hora = 20;
    dta.minuto = 10;

    int i = 10;

printf("Data: %d/%d/%d -- Horario: %d:%d", dta.dia, dta.mes, dta.ano, dta.hora, dta.minuto);
*/
    return 0;
}


