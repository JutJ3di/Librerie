#include<stdio.h>
#include"string.h"

int main(){

    string str = "ciAo";

    string cmp1 = "caio";
    string cmp2 = "cai1";

    printf("%ld\n%ld\n",len(str),len_(str));

    printf("%s\n",upper(str));

    printf("%s\n",lower(str));

    printf("%d\n",equal(cmp1,cmp2));

    printf("%s\n",reverse(str));

    printf("%d\n",upp_count(str));

    printf("%d\n",low_count(str));

    printf("%d\n",upp_index(str));

    printf("%d\n",low_index(str));

    string copy = hyper_copy(str);

    printf("%s    \n",copy);

    char *strcp = (char *)malloc(sizeof(len(str)));

    simple_copy(strcp,str);

    printf("%s\n",cmp1);

    printf("%d\n",str_char(str,'i'));


    return 0;
}
