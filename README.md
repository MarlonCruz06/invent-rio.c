# Sistema de Inventário - Mochila de Sobrevivência

## Descrição
Este é um sistema de inventário simples desenvolvido em linguagem C que simula uma mochila de loot inicial de um jogador em um jogo de sobrevivência. O sistema permite gerenciar até 10 itens diferentes com suas respectivas informações.

## Funcionalidades Implementadas

### 1. Struct Item
```c
typedef struct {
    char nome[30];      // Nome do item (ex: "KitMedico")
    char tipo[20];      // Tipo do item (ex: "cura", "arma", "munição")
    int quantidade;     // Quantidade do item
} Item;
```

### 2. Funções Principais

- **inserirItem()**: Adiciona um novo item à mochila
- **removerItem()**: Remove um item específico pelo nome
- **listarItens()**: Exibe todos os itens na mochila em formato tabular
- **buscarItem()**: Localiza um item específico usando busca sequencial

### 3. Requisitos Atendidos

✅ **Structs**: Implementação da struct Item com os campos solicitados  
✅ **Cadastro**: Sistema permite cadastrar até 10 itens  
✅ **Remoção**: Permite excluir itens por nome  
✅ **Listagem**: Exibe todos os itens após cada operação  
✅ **Busca Sequencial**: Localiza itens por nome  
✅ **Interface Clara**: Menu intuitivo com mensagens orientativas  
✅ **Documentação**: Código comentado explicando cada função  
✅ **Manutenibilidade**: Nomes claros de variáveis e funções  

## Como Compilar e Executar

### No Windows (PowerShell):
```powershell
gcc -o inventario_simples inventario_simples.c
.\inventario_simples.exe
```

### No Linux/Mac:
```bash
gcc -o inventario_simples inventario_simples.c
./inventario_simples
```

## Como Usar

1. **Executar o programa**: O sistema inicia com um item de demonstração (KitMedico)
2. **Menu Principal**:
   - Opção 1: Adicionar novo item (nome, tipo, quantidade)
   - Opção 2: Remover item existente (por nome)
   - Opção 3: Listar todos os itens na mochila
   - Opção 0: Sair do programa

3. **Exemplo de uso**:
   - Para adicionar: Digite 1 → informe nome, tipo e quantidade
   - Para remover: Digite 2 → informe o nome do item
   - Para listar: Digite 3 → visualiza todos os itens

## Estrutura do Código

### Bibliotecas Utilizadas:
- `stdio.h`: Para entrada e saída de dados
- `string.h`: Para manipulação de strings (strcmp, strcpy)
- `stdlib.h`: Para funções auxiliares

### Estruturas de Dados:
- **Vetor de structs**: Array de 10 posições para armazenar os itens
- **Contador global**: Controla o número atual de itens

### Algoritmos Implementados:
- **Busca Sequencial**: Percorre o vetor linearmente para encontrar itens
- **Remoção com Deslocamento**: Move elementos para preencher lacunas

## Exemplo de Saída

```
--- ITENS NA MOCHILA (1/10) ---
-----------------------------------------------------------
NOME                     | TIPO               | QUANTIDADE
-----------------------------------------------------------
KitMedico                | cura               | 3
-----------------------------------------------------------

Pressione Enter para continuar...
=======================================
    MOCHILA DE SOBREVIVENCIA - CODIGO DA ILHA
=======================================
Itens na Mochila: 1/10

1. Adicionar Item (Loot)
2. Remover Item
3. Listar Itens na Mochila
0. Sair
-------------------------------------------
Escolha uma opcao:
```

## Conceitos de Programação Utilizados

- **Estruturas de dados compostas (structs)**
- **Arrays/Vetores para armazenamento sequencial**
- **Funções modulares para organização do código**
- **Busca sequencial em estruturas de dados**
- **Manipulação de strings em C**
- **Laços de repetição (for/while)**
- **Estruturas condicionais (switch/case)**

Este sistema serve como base para conceitos mais avançados de estruturas de dados e pode ser expandido para incluir funcionalidades como ordenação, busca binária, persistência de dados, entre outros recursos.