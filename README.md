# Repositório de Algoritmos em C

Bem-vindo ao repositório de algoritmos em C! Este repositório contém um conjunto de algoritmos implementados em linguagem C, realizados durante o meu estudo de Práticas e Lógica de Programação.

## Ambiente de Desenvolimento

Para desenvolver os algoritmos, utilizei as seguintes ferramentas:

- [**MinGW (Minimalist GNU for Windows)**](https://github.com/niXman/mingw-builds-binaries/releases): Um conjunto de ferramentas que oferece um ambiente de desenvolvimento completo para C/C++ no Windows.
- [**Visual Studio Code**](https://code.visualstudio.com/): Um editor de código-fonte, utilizado em conjunto com MinGW para escrever os algoritmos em C.

Existe também o [Dev-C++](https://www.bloodshed.net/), um ambiente de desenvolvimento integrado (IDE) que facilita a escrita e compilação de código em C/C++. Com ele, não é necessário instalar e configurar manualmente o MinGW em uma máquina.

## Como Compilar e Executar

Para compilar e executar os algoritmos, você pode usar qualquer um dos ambientes de desenvolvimento mencionados. Aqui estão as instruções básicas para ambos:

### Usando Dev-C++

1. Abra o Dev-C++.
2. Importe o arquivo `main.c` do algoritmo desejado.
3. Compile o código (menu **Executar** > **Compilar**).
4. Execute o programa (menu **Executar** > **Executar**).

### Usando MinGW com Visual Studio Code

1. Certifique-se de que o MinGW esteja instalado e configurado no PATH do sistema.
2. Abra o Visual Studio Code.
3. Abra a pasta do algoritmo desejado.
4. Abra o terminal integrado do VS Code (<kbd>Ctrl</kbd> + <kbd>`</kbd>).
5. Compile o código usando o comando:
   ```sh
   gcc -o output/AlgoritmoN main.c
