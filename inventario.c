#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definição da struct Item para armazenar dados dos itens
struct Item {
    char nome[30];
    char tipo[20];
    int quantidade;
};

// Vetor global para armazenar até 10 itens
struct Item mochila[10];
int totalItens = 0;

// Função para inserir um novo item na mochila
void inserirItem() {
    if (totalItens >= 10) {
        printf("Mochila cheia! Não é possível adicionar mais itens.\n");
        return;
    }
    
    printf("Digite o nome do item: ");
    scanf("%s", mochila[totalItens].nome);
    
    printf("Digite o tipo do item: ");
    scanf("%s", mochila[totalItens].tipo);
    
    printf("Digite a quantidade: ");
    scanf("%d", &mochila[totalItens].quantidade);
    
    totalItens++;
    printf("Item adicionado com sucesso!\n\n");
}

// Função para remover um item da mochila pelo nome
void removerItem() {
    char nomeBusca[30];
    printf("Digite o nome do item a ser removido: ");
    scanf("%s", nomeBusca);
    
    int encontrado = -1;
    
    // Busca sequencial pelo item
    for (int i = 0; i < totalItens; i++) {
        if (strcmp(mochila[i].nome, nomeBusca) == 0) {
            encontrado = i;
            break;
        }
    }
    
    if (encontrado != -1) {
        // Move todos os itens uma posição para trás
        for (int i = encontrado; i < totalItens - 1; i++) {
            mochila[i] = mochila[i + 1];
        }
        totalItens--;
        printf("Item removido com sucesso!\n\n");
    } else {
        printf("Item não encontrado!\n\n");
    }
}

// Função para listar todos os itens na mochila
void listarItens() {
    printf("--- ITENS NA MOCHILA (%d/10) ---\n", totalItens);
    printf("-----------------------------------------------------------\n");
    printf("NOME                     | TIPO               | QUANTIDADE\n");
    printf("-----------------------------------------------------------\n");
    
    for (int i = 0; i < totalItens; i++) {
        printf("%-24s | %-18s | %d\n", mochila[i].nome, mochila[i].tipo, mochila[i].quantidade);
        printf("-----------------------------------------------------------\n");
    }
    printf("\n");
}

// Função para buscar um item específico pelo nome
void buscarItem() {
    char nomeBusca[30];
    printf("Digite o nome do item a ser buscado: ");
    scanf("%s", nomeBusca);
    
    int encontrado = -1;
    
    // Busca sequencial pelo item
    for (int i = 0; i < totalItens; i++) {
        if (strcmp(mochila[i].nome, nomeBusca) == 0) {
            encontrado = i;
            break;
        }
    }
    
    if (encontrado != -1) {
        printf("\nItem encontrado:\n");
        printf("Nome: %s\n", mochila[encontrado].nome);
        printf("Tipo: %s\n", mochila[encontrado].tipo);
        printf("Quantidade: %d\n\n", mochila[encontrado].quantidade);
    } else {
        printf("Item não encontrado!\n\n");
    }
}

int main() {
    int opcao;
    char buffer[100];
    
    // Adiciona um item inicial para demonstração (como mostrado na imagem)
    strcpy(mochila[0].nome, "KitMedico");
    strcpy(mochila[0].tipo, "cura");
    mochila[0].quantidade = 3;
    totalItens = 1;
    
    while (1) {
        // Lista os itens atuais
        listarItens();
        
        printf("Pressione Enter para continuar...\n");
        fgets(buffer, sizeof(buffer), stdin);
        
        printf("=======================================\n");
        printf("    MOCHILA DE SOBREVIVENCIA - CODIGO DA ILHA\n");
        printf("=======================================\n");
        printf("Itens na Mochila: %d/10\n\n", totalItens);
        
        printf("1. Adicionar Item (Loot)\n");
        printf("2. Remover Item\n");
        printf("3. Listar Itens na Mochila\n");
        printf("0. Sair\n");
        printf("-------------------------------------------\n");
        printf("Escolha uma opcao: ");
        
        if (scanf("%d", &opcao) != 1) {
            // Limpa o buffer em caso de entrada inválida
            while (getchar() != '\n');
            opcao = -1;
        }
        
        switch (opcao) {
            case 1:
                inserirItem();
                break;
            case 2:
                removerItem();
                break;
            case 3:
                listarItens();
                break;
            case 0:
                printf("Saindo do sistema...\n");
                exit(0);
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n\n");
        }
    }
    
    return 0;
}