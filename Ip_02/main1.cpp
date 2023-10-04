#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

struct Data{

  int dia;
  int mes;
  int ano;
};

struct Livro{
  string titulo;
  string autor;
  int ano_publi;
};

struct Pet{
  string nome;
  int dta_nasc;
};

struct  Vacina{
    string tipo_vac;
    string dta_vac;   
};

struct Disciplina{
  string nome_disc;
  string ementa;

};
struct  Aluno{
    string nome;
    int idade;
    int matricula;
};
struct Notas {
    int nota1;
    int nota2;
    int nota3;
};

struct Disciplina_Cursada{
    Aluno aluno;
    Disciplina disciplina;
    Notas notas;
    int ano_curso;
    int semestre;
};



int main(){
    printf("hello world \n");
    Data data;
    Livro livro;
    Pet pet;
    Vacina vacina;
    Disciplina disciplina;
    Aluno aluno;
    Notas notas;
    Disciplina_Cursada disciplina_cursada;


  /*
     //24 Crie uma estrutura de dados para representar uma data com dia, mC*s e ano
     printf("digite um dia: ");
     scanf("%d", &data.dia);
     printf("digite um mes: ");
     scanf("%d", &data.mes);
     printf("digite um ano: ");
     scanf("%d", &data.ano);

     int mes = 12;
     if(data.mes > mes){
     printf("mes invalido");
     }else{
     printf("a sua data: %d/%d/%d", data.dia, data.mes, data.ano);

     }

     data.dia = 18;
     data.mes = 9;
     data.ano = 2022;

     printf("a sua data: %d/%d/%d", data.dia, data.mes, data.ano);

   */
//25 Defina uma estrutura chamada Livro que contenha informaC'C5es sobre um livro, como tC-tulo, autor e ano de publicaC'C#o.
/*


    printf("digite um titulo: ");
    gets(livro.titulo); //uso gets por ser char
    system("CLS");
    printf("digite o autor: ");
    gets(livro.autor);
    system("CLS");
    printf("digite o ano de publicacao: ");
    scanf("%d", &livro.ano_publi);

    printf("Seu livro e: titulo:%s\n autor: %s /n ano de publicacao: %d", livro.titulo.c_str(), livro.autor.c_str(), livro.ano_publi);
*/

// 26 Crie uma estrutura de dados para representar um PET, com nome e ano de nascimento.
/*



  printf ("digite o nome do seu pet: \n");

  printf ("Nome: ");
  getline (cin, pet.nome);


  printf ("\n Idade: ");
  scanf ("%d", &pet.dta_nasc);


  printf
    ("Os dados do seu pet sao:\n Nome: %s \n Idade: %d ", pet.nome.c_str (), pet.dta_nasc);
  
*/
/*
//27 Crie uma estrutura de dados que represente uma vacina contendo tipo, e o animal PET a que foi
aplicado (utilize a estrutura criada anteriormente). 

  printf ("digite o nome do seu pet: \n");

  printf ("Nome: ");
  getline (cin, pet.nome);
    system("cls");
    
printf ("tipo da vacina: ");
  getline (cin, vacina.tipo_vac);
      system("cls");

  printf ("Nome da vacina: ");
  getline (cin, vacina.dta_vac);
  
  printf ("\n Idade: ");
 scanf ("%d", &pet.dta_nasc);
    system("cls");

  printf("Os dados do seu pet sao:\n Nome: %s \n Idade: %d \n Tipo de vacina: %s \n Data da vacina: %s ", pet.nome.c_str (), pet.dta_nasc, vacina.tipo_vac.c_str(),vacina.dta_vac.c_str());

*/


//28 Crie uma estrutura chamada Disciplina que armazene informações sobre uma disciplina, incluindo nome e ementa.
/*
    disciplina.nome_disc = "Engenharia de software";
    disciplina.ementa = " Eixo III – Engenharia de software. • Disciplina/ Atividade: Laboratorio Integrado - Carga Horária: 240h. ";
*/
printf("seus dados da Disciplina sao: \n nome da Disciplina: %s, \n ementa: %s", disciplina.nome_disc.c_str(), disciplina.ementa.c_str());
//29 Crie uma estrutura chamada Aluno que armazene informações sobre um aluno, incluindo nome, idade, matrícula.
/*
    aluno.nome = "Willian";
    aluno.idade = 19;
    aluno.matricula = 7357464;
printf("seus dados sao: \n nome da do aluno: %s, \n idade: %d, \n matricula: %d", aluno.nome.c_str(), aluno.idade, aluno.matricula);
*/
//30 Crie uma estrutura chamada DisciplinaCursada que armazena informações sobre um aluno e uma 
//disciplina, incluindo um aluno, uma disciplina, o ano e o semestre em que cursou a disciplina e três notas da disciplina. 

/*
  printf ("Nome do aluno: ");
  getline (cin,  disciplina_cursada.aluno.nome);
   
    
  printf ("Disciplina cursada: ");
  getline (cin,  disciplina_cursada.disciplina.nome_disc);



  printf("Notas: ");
  printf ("nota 1: ");
  scanf("%d",&notas.nota1);
  printf ("nota 2: ");
  scanf("%d",&notas.nota2);
  printf ("nota 3: ");
  scanf("%d",&notas.nota3);

    
  printf ("Matricula: ");
  scanf ("%d", &disciplina_cursada.aluno.matricula);

  
  printf ("\n Semestre: ");
  scanf ("%d", &disciplina_cursada.semestre);
  system("cls");
  
  printf ("\n Ano: ");
  scanf ("%d", &disciplina_cursada.ano_curso);
  system("cls");

  printf("Seus dados academicos sao:\n Nome: %s \n disciplina: %s \n nota: %d \n Matricula: %d \n Semestre: %d \n ano: %d", disciplina_cursada.aluno.nome.c_str(), disciplina_cursada.disciplina.nome_disc.c_str(), notas.nota1,disciplina_cursada.aluno.matricula, disciplina_cursada.semestre, disciplina_cursada.ano_curso);
*/

  return 0;
}

