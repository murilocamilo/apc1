#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

// Definição da estrutura para armazenar dados do aluno
struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float grade;
};

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;

    char option;
    do {
        printf("\nMenu Principal\n");
        printf("1. Adicionar Estudante\n");
        printf("2. Visualizar Estudantes\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &option);

        switch(option) {
            case '1':
                // Adicionar Estudante
                if (numStudents < MAX_STUDENTS) {
                    struct Student newStudent;
                    printf("\nAdicionar Estudante\n");
                    printf("Nome: ");
                    scanf("%s", newStudent.name);
                    printf("Idade: ");
                    scanf("%d", &newStudent.age);
                    printf("Nota: ");
                    scanf("%f", &newStudent.grade);

                    students[numStudents] = newStudent;
                    numStudents++;
                    printf("Estudante adicionado com sucesso.\n");
                } else {
                    printf("Limite de estudantes atingido.\n");
                }
                break;

            case '2':
                // Visualizar Estudantes
                printf("\nEstudantes Cadastrados:\n");
                if (numStudents > 0) {
                    for (int i = 0; i < numStudents; i++) {
                        printf("Estudante %d\n", i+1);
                        printf("Nome: %s\n", students[i].name);
                        printf("Idade: %d\n", students[i].age);
                        printf("Nota: %.2f\n", students[i].grade);
                        printf("\n");
                    }
                } else {
                    printf("Nenhum estudante cadastrado.\n");
                }
                break;

            case '3':
                // Sair
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    } while (option != '3');

    return 0;
}
