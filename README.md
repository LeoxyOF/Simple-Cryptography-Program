# Cryptography (C)

--English--

This project is a small C program that converts alphabetic text into its numeric representation.

Mapping used:

A = 1  
B = 2  
...  
Z = 26  
Space = 27  

Example:

Input:
John Lennon

Output:
10 15 8 14 27 12 5 14 14 15 14

## What the Program Does

- Scans the input string to determine its length;
- Dynamically allocates an integer array using malloc;
- Converts each character to uppercase;
- Matches it against a fixed alphabet table;
- Returns a struct containing:
  - A pointer to the allocated integer array;
  - The size of the array.

## What I've Practiced

- How dynamic memory allocation works (malloc / free);
- The difference between stack and heap memory;

## Attention
- Only uppercase or lowercase alphabetic characters (A–Z) and spaces are supported.
- This is not real encryption — it is a numeric encoding exercise.

--Português--

Esse é um pequeno projeto em C que converte textos em números.

Mapeamento utilizado:

A = 1 
B = 2 
... 
Z = 26 
Espaço = 27

Exemplo:

Input:
John Lennon

Output:
10 15 8 14 27 12 5 14 14 15 14

## O que o programa faz

- Analisa a string de entrada para determinar seu comprimento;
- Aloca dinamicamente um bloco de memória para inteiros usando malloc;
- Converte o texto para números;
- Retorna uma estrutura contendo:
  - Um ponteiro para o bloco de memória de inteiros alocado;
  - O número de elementos.

## O que eu pratiquei

- Como funciona a alocação dinâmica de memória (malloc / free);
- A diferença entre memória stack e memória heap;

## Atenção
- Somente letras (A–Z) e espaços são suportados.
- Isso não é criptografia real — é apenas um exercício de codificação.
