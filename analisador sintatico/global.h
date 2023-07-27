#include <stdio.h>
#include <ctype.h>

#define BSIZE 128 
#define NONE -1
#define EOS '\0'

#define NUM 256
#define DIV 257
#define MOD 258
#define ID 259
#define DONE 260

int tokenval; // valor do atributo token
int clinha; // contador de linhas

struct entry //formata cada entrada da tabela de símbolos
{
    char *lexptr;
    int token;
};

struct entry tabSimb[]; //tabela de simbolos

