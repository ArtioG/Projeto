#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int opcao;
void TelaLogin(){

    char login[15] = "eduardo";
    char login1[15];
    char senha[15] = "25252526";
    char senha1[15];
    int login_efetuado = 0; 

    while(!login_efetuado){
        printf("Digite o Login: ");
        scanf("%s", login1);

        printf("Digite a Senha: ");
        scanf("%s", senha1);

        if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
            printf("\n\nLOGADO!\n\n");
            login_efetuado = 1;
        }
        else
            printf("\n\nDADOS INVALIDOS!\n\n");
    }

}
void CadastroClientes()
{
 char nome [30];
 char cpf[13];
 char senha[15];
 char email[20];
 int i;
 int num;

 printf("QUANTOS ALUNOS VOCE QUER CADASTRAR: ");
 scanf("%d", &num);
 fflush(stdin);
 

 for ( i = 0; i < num; i++)
 {
    
    printf("DIGITE SEU NOME: \n");
    fgets(nome,29,stdin);
    fflush(stdin);
    
    printf("DIGITE SUA SENHA: \n");
    fgets(senha,14,stdin);
    fflush(stdin);

    printf("DIGITE SEU CPF: \n");
    fgets(cpf,12,stdin);
    fflush(stdin);

    printf("DIGITE SEU EMAIL: \n");
    fgets(email,19,stdin);
    fflush(stdin);

    printf("NOME: %s\n", nome);
    printf("SENHA: %s\n", senha);
    printf("CPF: %s\n", cpf);
    printf("EMAIL: %s\n", email);
    
 }
}
void MostrarMenu(){
    printf("\n==================================\n");
    printf("\n1- Cadastro\n");
    printf("\n2- Sobre Nos\n");
    printf("\n3- Denucie\n");
    printf("\n4- Contato\n");
    printf("\n0- Sair\n");
    printf("\nEscolha a sua opcao\n");
    scanf("%d",&opcao);
    printf("\n==================================\n");
    getchar();
}

int main ()
{
 setlocale(LC_ALL, "");
 char denuncia[400], nomed[30];
 int num;
 TelaLogin();
 MostrarMenu();
 switch (opcao)
 {
 case 1:
    CadastroClientes();
     break;
 case 2:
    printf("SOBRE NOS: ");
    printf("Temos como objetivo de concientizar as criancas para que possam entender melhor sobre educacao sexual, disponibilizando\n");
    printf("instrucoes para que elas possam entender de forma simples sobre o conteudo, tambem trabalhamos com casos de denuncia\n");
    printf("e disponibilizamos o semaforo do toque dentro do nosso site.");
     break;
 case 3:
    printf("\nEscreva aqui sua denuncia ou nos contate\n");
    printf("Escreva seu nome ou apelido: ");
    fgets(nomed,29,stdin);
    fflush(stdin);
    printf("\nDenuncia: ");
    fgets(denuncia,399,stdin);
    fflush(stdin);
     break;
 case 4:
    printf("\nEntre em contato conosco\n");
    printf("\nTelefone Cel:(61)998475148\n");
    printf("\nTelefone Fixo: (61)30328362");
    printf("\nEmail: criancasegura@gmail.com\n");
     break; 
 default:
     break;
 }
}