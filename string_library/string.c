#include"string.h"
#include<stdio.h>



size_t len(string str){

    return strlen(str)+1;

}

size_t len_(string str){

    return strlen(str);

}


 
int equal(string str_1,string str_2){

    if (strcmp(str_1,str_2) == 0)
        return 0;
    else
        return 1;
    
}

string  upper(string str){


    char* temp = (char *)calloc(2048,sizeof(char));

    if (!temp) return NULL;

    strcpy(temp,str);

    for (size_t i = 0; i < len_(str); i++)
    {
        
        if (temp[i] >= 97 && temp[i] <= 122)
        {
            temp[i] = temp[i] - 32;   
        }
        
    }

    str = (char *)malloc(strlen(temp)+1);
    
    strcpy(str,temp);

    free(temp);

    return str;

}

string lower(string str){

    char* temp = (char *)calloc(2048,sizeof(char));

    if (!temp) return NULL;
    

    strcpy(temp,str);

    for (size_t i = 0; i < len_(str); i++)
    {
        
        if (temp[i] >= 65 && temp[i] <= 90)
        {
            temp[i] = temp[i] + 32;   
        }
        
    }

    str = (char *)malloc(strlen(temp)+1);
    
    strcpy(str,temp);

    free(temp);

    return str;

}



string reverse(string str){


    int count = strlen(str);
    int tmp;

    char *rever = (char *)calloc(2048,sizeof(char));

    if(!rever) return NULL;

    int j = 0;

    for(int i = count-1 ; i >= 0 ; i--){
 
        rever[i] = str[j];
        j++;            
        
    }

    rever[count] = '\0';

    str = (char *)malloc(len(rever));
    
    strcpy(str,rever);

    free(rever);

    return str;

}


int upp_count(string str){

    int w = 0;

    for (size_t i = 0; i < len(str); i++)
    {
        if(str[i] >= 65 && str[i]<=90)
            w++;
    }
    
    return w;

}



int low_count(string str){

    int w = 0;

    for (size_t i = 0; i < len(str); i++)
    {
        if(str[i] >= 97 && str[i]<=122)
            w++;
    }
    
    return w;

}

int upp_index(string str){

    

    for (size_t i = 0; i < len(str); i++)
    {
        if(str[i] >= 65 && str[i]<=90)
            return i;
    }
    
    return -1;

}

int low_index(string str){


    for (size_t i = 0; i < len(str); i++)
    {
        if(str[i] >= 97 && str[i]<=122)
            return i;
    }
    
    return -1;

}


string hyper_copy(string src){

    
    string ret = (string)malloc(len(src));
    
    strcpy(ret,src);

    return ret;

}

void simple_copy(string dst,string src){

    strcpy(dst,src);

}

int str_char(string src,char token){

    for (size_t i = 0; i < len(src); i++)
    {
        if (src[i] == token )
        {
            return i;
        }
        
    }
    return -1;

}
