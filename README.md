# Lista de Exercícios 1 - Cifras Clássicas — Segurança Computacional

## Introdução

Este repositório contém a implementação de duas cifras clássicas da criptografia: a **Cifra de César** e a **Cifra de Transposição**. O projeto foi desenvolvido como parte da disciplina de **Segurança Computacional**, com o objetivo de explorar técnicas históricas de criptografia, compreendendo seu funcionamento, limitações e relevância no contexto moderno.


## Contextualização

Antes do desenvolvimento de sistemas criptográficos modernos como RSA, AES e SHA, métodos simples como as cifras de substituição e transposição eram amplamente utilizados para proteger mensagens. Apesar de hoje serem considerados inseguros, esses métodos ainda são valiosos para entender os fundamentos da criptografia.

Este projeto foca em duas técnicas:

- **Cifra de César**: uma cifra de substituição simples em que cada letra do texto é substituída por outra, deslocada um número fixo de posições no alfabeto.
- **Cifra de Transposição**: uma técnica em que as letras da mensagem são embaralhadas de acordo com uma chave, sem alterar as letras em si.

## Descrição Técnica

### Cifra de César
- Realiza criptografia e descriptografia com base em deslocamento alfabético.
- Usa um valor fixo de chave de deslocamento definido no próprio código.
- Trata maiúsculas e minúsculas de forma apropriada.

### Cifra de Transposição
- Implementa uma cifra de transposição simples baseada em uma chave numérica fixa.
- A mensagem é reorganizada conforme a ordem da chave.
- Também realiza a reversão (descriptografia) da transposição.

## Especificações de Entrada

As cifras implementadas neste projeto operam sob as seguintes **restrições de entrada**:

- Apenas **letras** do alfabeto latino (A–Z, a–z);
- **Sem espaços, números ou caracteres especiais**;
- Entradas inválidas podem gerar comportamento inesperado.

## Estrutura do Projeto

    lista-1-SC/
    ├── cifra_deslocamento/ 
    │ └── cifra_cesar.cpp
    ├── cifra_transposicao/ 
    │ └── cifra_tranposicao.cpp 
    └── README.md

## Como Executar

### Requisitos

- Compilador C++ (como `g++`)
- Terminal (Linux, macOS ou Windows com WSL/CMD/PowerShell)

### Compilação

Entre no diretório do projeto e compile os arquivos:

```bash
g++ cifra_deslocamento/cifra_cesar.cpp -o cifra_cesar
g++ cifra_transposicao/cifra_tranposicao.cpp -o cifra_transposicao
```

Como o programa está configurado para testar diretamente as funções de criptografia e descriptografia (sem entrada do usuário), a execução é feita diretamente:

```bash
./cifra_cesar
./cifra_transposicao
```

A saída será exibida no terminal com mensagens e testes já definidos no código-fonte.

## Conclusão
Este projeto demonstra como as cifras clássicas operam na prática, oferecendo uma base para entender conceitos fundamentais da criptografia:

- Chaves simétricas;
- Códigos de substituição e transposição;
- Fragilidades desses métodos frente a ataques de força bruta e análise de frequência.
