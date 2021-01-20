#ifndef STRING_H
#define STRING_H

#include<string.h>
#include<unistd.h>
#include<stdlib.h>

//definisce un tipo string
typedef char  *string;

//lunghezza con carattere terminatore
size_t len(string str); 

//lunghezza senza carattere terminatore
size_t len_(string str);

//ritorna 0 se le stringhe sono uguali,altrimenti 1
int equal(string str_1,string str_2);

//riporta la stringa str con maiuscole
string upper(string str); 

//riporta la stringa con minuscole
string lower(string str);

//ritorna la stringa ordinata alfabeticamente a --> z
void sort(string str);  

//ritorna il numero di lettere maiuscole
int upp_count(string str);

//ritorna il numero di lettere minuscole
int low_count(string str);

//ritorna la posizione della prima letera maiuscola
int upp_index(string str);

//ritorna la posizione della prima lettera minuscola
int low_index(string str);

//copia src in dst (dst = src)
void simple_copy(string dst,string src);

//ritorna la stringa copia del src
string hyper_copy(string src);

//ritorna la posizione della prima riccorrenza del token se non c'è ritorna  -1
int str_char(string src,char token);

//conta vocali
int v_count(string src);

//conta consonanti
int c_count(string src);

//conta caratteri speciali .!,;!"£$%&/()
int s_count(string src);

//libera la memoria
void string_destroy(string src);

#endif
