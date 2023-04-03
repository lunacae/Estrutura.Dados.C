#include <stdio.h>

typedef struct {
    int matricula;
    char nome[10];
    int notas[3];
} Aluno;

int main ()
{
    int i = 0;
    Aluno alunos[5];
    
    for(int i = 0; i < 2; i++)
    {
        printf("Informe a matrícula: ");
        scanf("%i", &alunos[i].matricula);
        
        printf("Informe o nome: ");
        scanf("%s", alunos[i].nome);
        
        printf("Informe a primeira nota: ");
        scanf("%i", &alunos[i].notas[0]);
        
        printf("Informe a segunda nota: ");
        scanf("%i", &alunos[i].notas[1]);
        
        printf("Informe a terceira nota: ");
        scanf("%i", &alunos[i].notas[2]);
    }
    
    for(i = 0;i < 2;i++)
    {
        printf("Nome: %s \n", alunos[i].nome);
        
        printf("Matricula: %i \n", alunos[i].matricula);
        
        printf("Notas 1, 2, 3: %i, %i, %i \n", alunos[i].notas[0], alunos[i].notas[1], alunos[i].notas[2]);
        
        printf("Media: %i \n", (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2])/3 );
    }
    
    return 0;
}
