/*********************************************************************/
/**   ACH2001 - Introducao a Programação                            **/
/**   EACH-USP - Primeiro Semestre de 2022                          **/
/**   Turma 02 - Prof. Marcos Lordello Chaim                        **/
/**                                                                 **/
/**   Primeiro Exercicio-Programa                                   **/
/**                                                                 **/
/**   <nome do(a) aluno(a)>                   <numero USP>          **/
/**                                                                 **/
/*********************************************************************/
#include <stdio.h>
#include <stdlib.h>

// Adicione funções auxiliares se for necessário

int verificaDataValida(int d, int m, int a)
{
    // Adicione seu código

    return 0;
}
int main()
{
    int dia, mes, ano;

    printf("Entre com a data de inicio do ano letivo:\n");
    printf("Entre com o dia: ");
    scanf("%d", &dia);
    printf("Entre com o mes: ");
    scanf("%d", &mes);
    printf("Entre com o ano: ");
    scanf("%d", &ano);

    if (!verificaDataValida(dia, mes, ano))
    {
        printf("Dados incorretos\n");
        exit(1); // Esta função aborta a execução do programa.
    }

    // Adicione seu código
}
