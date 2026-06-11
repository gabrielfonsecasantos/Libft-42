# Libft - @42SP

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language C" />
</p>

## 📝 Descrição
A **Libft** é o primeiro projeto do currículo principal da 42. O objetivo é recriar diversas funções da biblioteca padrão do C (`libc`), além de implementar outras funções utilitárias. 


## 🛠️ Funções Implementadas

### Parte 1 - Funções da Libc
| Função | Descrição |
| :--- | :--- |
| `ft_isalpha` | Verifica se o caractere é alfabético. |
| `ft_isdigit` | Verifica se o caractere é um dígito (0-9). |
| `ft_isalnum` | Verifica se o caractere é alfanumérico. |
| `ft_isascii` | Verifica se o caractere pertence à tabela ASCII. |
| `ft_isprint` | Verifica se o caractere é imprimível. |
| `ft_strlen` | Calcula o comprimento de uma string. |
| `ft_memset` | Preenche a memória com um byte constante. |
| `ft_bzero` | Zera uma estrutura de dados de tamanho n. |
| `ft_memcpy` | Copia uma área de memória. |
| `ft_memmove` | Copia uma área de memória (seguro para sobreposições). |
| `ft_strlcpy` | Copia uma string limitando o tamanho do buffer. |
| `ft_strlcat` | Concatena uma string limitando o tamanho do buffer. |
| `ft_toupper` | Converte um caractere para maiúsculo. |
| `ft_tolower` | Converte um caractere para minúsculo. |
| `ft_strchr` | Localiza a primeira ocorrência de um caractere na string. |
| `ft_strrchr` | Localiza a última ocorrência de um caractere na string. |
| `ft_strncmp` | Compara duas strings até `n` caracteres. |
| `ft_memchr` | Localiza um caractere em um bloco de memória. |
| `ft_memcmp` | Compara dois blocos de memória. |
| `ft_strnstr` | Localiza uma sub-string dentro de uma string limitando a busca. |
| `ft_atoi` | Converte uma string em um inteiro. |
| `ft_calloc` | Aloca memória dinamicamente e a preenche com zeros. |
| `ft_strdup` | Duplica uma string alocando nova memória. |

### Parte 2 - Funções Adicionais
| Função | Descrição |
| :--- | :--- |
| `ft_substr` | Extrai uma sub-string de uma string maior. |
| `ft_strjoin` | Concatena duas strings em uma nova alocação. |
| `ft_strtrim` | Remove caracteres específicos do início e fim de uma string. |
| `ft_split` | Divide uma string em uma matriz de strings usando um caractere delimitador. |
| `ft_itoa` | Converte um número inteiro em uma string. |
|`ft_strmapi` | Aplica uma função a cada caractere de uma string, criando uma nova. |
| `ft_striteri` | Aplica uma função a cada caractere de uma string (modificando a própria string). |
| `ft_putchar_fd` | Saída de um caractere para um file descriptor. |
| `ft_putstr_fd` | Saída de uma string para um file descriptor. |
| `ft_putendl_fd` | Saída de uma string seguida por uma nova linha para um file descriptor. |
| `ft_putnbr_fd` | Saída de um número inteiro para um file descriptor. |

### Funções da Parte 3 - Linked List
| Função | Descrição |
| :--- | :--- |
| `ft_lstnew` | Cria um novo nó de lista alocando memória dinamicamente. |
| `ft_lstadd_front` | Adiciona o novo nó no início da lista. |
| `ft_lstsize` | Conta o número de nós presentes na lista. |
| `ft_lstlast` | Retorna o último nó da lista. |
| `ft_lstadd_back` | Adiciona o novo nó no final da lista. |
| `ft_lstdelone` | Deleta um nó liberando sua memória através de uma função de deleção. |
| `ft_lstclear` | Deleta e libera a memória de um nó e de todos os seus sucessores. |
| `ft_lstiter` | Itera a lista e aplica uma função ao conteúdo de cada nó. |
| `ft_lstmap` | Itera a lista e aplica uma função ao conteúdo de cada nó, criando uma nova lista com os resultados. |

---

## 🚀 Instruções 

### Como Compilar e Usar

O projeto acompanha um `Makefile` configurado com as regras exigidas pela Norma.

### Regras do Makefile:
* `make` ou `make all`: Compila os arquivos fonte obrigatórios e gera a biblioteca `libft.a`.
* `make clean`: Remove os arquivos objetos (`.o`).
* `make fclean`: Remove os arquivos objetos e a biblioteca estática (`.a`).
* `make re`: Executa `fclean` e `make` novamente.

### Usando em seu próprio projeto:
Para usar a sua `libft.a` em outro projeto em C, inclua o header no seu código e compile linkando a biblioteca:

```c
#include "libft.h"
```

```c
cc main.c -L. -lft -o my_program
```

## 🛠️  Recursos

Alguns materiais foram utilizados como consulta e para tirar dúvidas, entre eles:

### Linux Man Pages:

* clássico manual das funções: 
https://man7.org/linux/man-pages/index.html


### Projeto de Algoritmos (em C) - Paulo Feofiloff - IME-USP

* Curso introdutório de projeto de algoritmos e estruturas de dados básicas: https://www.ime.usp.br/~pf/algoritmos/index.html#C-language

### Livro: "Understanding and Using C Pointers by Richard Reese"

Copyright © 2013 Richard Reese, Ph.D. All rights reserved.

### StackOverflow

* Utilizado para dúvidas pontuais, como a conversa abaixo sobre `técnicas para identificar quando um overflow acontece`:
https://stackoverflow.com/questions/1815367/catch-and-compute-overflow-during-multiplication-of-two-large-integers


### Links úteis para a montagem do Makefile:

* Documentação do GNU MAKE:
https://www.gnu.org/software/make/manual/make.html

* Makefile Tutorial (vídeo):
https://www.youtube.com/watch?v=U1I5UY_vWXI

* Curso Makefile (vídeo) - Canal Geofisicando:
https://www.youtube.com/watch?v=Tt3BLZCVjAE&list=PLLCFxfe9wkl-tCZvSCbzQGcNv9nSN5ZAP


---


### Como a IA foi Utilizada?

* Utilizada para esclarecer as especificações das funções.
* Utilizada para entender os casos de borda das funções.
* Utilizada para a confecção de partes deste README.


