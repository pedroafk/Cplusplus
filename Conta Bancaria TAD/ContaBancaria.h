/* Criado por:
Pedro Henrique Figueiredo Cota Oliveira
Saulo Peixoto de Castro
Anderson Araujo de Souza Ferreira
Luiz Henrique Barcelos Duarte

Durante a disciplina de Algoritmos e estrutura de dados 1
e tem como objetivo simular uma conta bancária utilizando Tipo
Abstratos de Dados.
*/

# ifndef PESSOA_H
# define PESSOA_H

// definição do tipo
typedef struct {
	int numero;
	double saldo;
} ContaBancaria;

struct Data
{
    int dia;
    int mes;
    int ano;
};

// cabeçalho das funções
void Inicializa(ContaBancaria* conta, int numero, double saldo);
void InicializaData (Data *contaData, int, int, int);
void ImprimeData (Data *contaData);
void ImprimeExtento (Data *ContaData);
void Deposito (ContaBancaria* conta, double valor);
void Saque (ContaBancaria* conta, double valor);
void Imprime (ContaBancaria conta);
void Transferencia(ContaBancaria* conta, ContaBancaria* conta1, float );

#endif
