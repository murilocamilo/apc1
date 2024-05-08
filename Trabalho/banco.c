#include <stdio.h>

#define MAX_ENTRIES 100
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 100

// Estrutura para armazenar os dados
struct Entrada {
  char nome[MAX_NAME_LENGTH];
  char email[MAX_EMAIL_LENGTH];
  int idade;
};

int main() {
  // Variáveis
  struct Entrada entradas[MAX_ENTRIES];
  int escolha, num_entradas = 0;
  char buffer[MAX_NAME_LENGTH];

  // Loop principal
  while (1) {
    // Menu principal
    printf("\nMenu Principal\n");
    printf("1. Adicionar entrada\n");
    printf("2. Visualizar todas as entradas\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");

    // Verificar se a entrada foi bem-sucedida
    if (scanf("%d", &escolha) != 1) {
      printf("Erro: Entrada invalida. Tente novamente.\n");
      while (getchar() != '\n')
        ; // Limpar o buffer de entrada
      continue;
    }

    // Limpar o buffer de entrada
    while (getchar() != '\n')
      ;

    // Switch case para opções
    switch (escolha) {
    case 1:
      // Adicionar entrada
      if (num_entradas < MAX_ENTRIES) {
        printf("\nAdicionar entrada:\n");
        printf("Nome: ");
        if (fgets(buffer, MAX_NAME_LENGTH, stdin) == NULL) {
          printf("Erro ao ler o nome. Tente novamente.\n");
          continue;
        }
        sscanf(buffer, "%[^\n]",
               entradas[num_entradas]
                   .nome); // Ler até encontrar uma quebra de linha
        printf("Email: ");
        if (fgets(entradas[num_entradas].email, MAX_EMAIL_LENGTH, stdin) ==
            NULL) {
          printf("Erro ao ler o email. Tente novamente.\n");
          continue;
        }
        printf("Idade: ");
        if (scanf("%d", &entradas[num_entradas].idade) != 1) {
          printf("Erro: Idade invalida. Tente novamente.\n");
          while (getchar() != '\n')
            ; // Limpar o buffer de entrada
          continue;
        }
        // Limpar o buffer de entrada
        while (getchar() != '\n')
          ;
        num_entradas++;
      } else {
        printf("Erro: Nao ha mais espaco para novas entradas.\n");
      }
      break;
    case 2:
      // Visualizar todas as entradas
      printf("\nTodas as entradas:\n");
      if (num_entradas == 0) {
        printf("Nenhuma entrada encontrada.\n");
      } else {
        for (int i = 0; i < num_entradas; i++) {
          printf("Nome: %s, Email: %s, Idade: %d\n", entradas[i].nome,
                 entradas[i].email, entradas[i].idade);
        }
      }
      break;
    case 3:
      // Sair
      printf("Saindo do programa.\n");
      return 0;
    default:
      printf("Erro: Opcao invalida. Tente novamente.\n");
    }
  }

  return 0;
}
