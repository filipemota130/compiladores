#include "global.h"
#define STRMAX 999
#define SYMMAX 100

char lexemas[STRMAX];
int lastchar = -1;  //ultima posição usada em lexemas
struct entry tabSimb[SYMMAX];
int lastentry = 0; //ultima possição usada
char s[];
int tok;
int len;

int buscar(s){ //retorna a posição da entrada para s
    int p;
    for (p = lastentry; p >0; p=p-1) {
        if (strcmp(tabSimb[p].lexptr,s) == 0) {
            return p;
        }
    }
    return 0;
}

int insert (s, tok){
    len = strlen(s);
    if (lastentry + 1 >= SYMMAX)
        erro ("tabela de símbolo está cheia");
    if(lastchar + len + 1 >= STRMAX){
        erro ("array de lexemas está cheia");
    }
    lastentry = lastentry + 1;
    tabSimb[lastentry].token = tok;
    tabSimb[lastentry].lexptr = &lexemas[lastchar + 1];
    strcpy(tabSimb[lastentry].lexptr,s);
    return lastentry;    
}