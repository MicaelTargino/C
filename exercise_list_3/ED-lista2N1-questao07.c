/*
** Função : media dos alunos e checa se foram aprovados pela media de aproveitamento.
** Autor : Micael Targino
** Data : 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {

    float nota1, nota2, nota3, ME, MA;
    char conceito;

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &nota1);
    
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &nota2);
    
    printf("Informe a nota da terceira prova: ");
    scanf("%f", &nota3);

    // Calcula a média das notas das provas (ME)
    ME = (nota1 + nota2 + nota3) / 3;

    // Calcula a média de aproveitamento (MA)
    MA = (nota1 + nota2 * 2 + nota3 * 3 + ME) / 7;

    // Determina o conceito com base na média de aproveitamento (MA)
    if (MA >= 9.0) {
        conceito = 'A';
    } else if (MA >= 7.5) {
        conceito = 'B';
    } else if (MA >= 6.0) {
        conceito = 'C';
    } else if (MA >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    // Exibe os resultados
    printf("Número do aluno: %d\n", numeroAluno);
    printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
    printf("Média dos exercícios (ME): %.2f\n", ME);
    printf("Média de aproveitamento (MA): %.2f\n", MA);
    printf("Conceito: %c\n", conceito);

    // Verifica se o aluno foi aprovado ou reprovado
    if (conceito != 'C') {
        printf("APROVADO\n");
    } else {
        printf("REPROVADO\n");
    }

    return 0;
}
