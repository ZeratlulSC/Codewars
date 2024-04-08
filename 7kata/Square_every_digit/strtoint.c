#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long ull;

ull test (unsigned n){
    char *str = (char*) malloc(22);
    char *buf = (char*) malloc(22);
    char *b = (char *) malloc(3);
    for (n; n!=0; n=n/10){
        sprintf(b, "%d", (n%10)*(n%10));
        strcpy(buf, str);
        strcpy(str, b);
        strcat(str,buf);
    }
    unsigned long long ret = strtoull(str, NULL, 10);
    free(buf);
    free(b);
    free(str);
    return ret;
}

int main(){
    printf("%llu", test(3999999999u));
    printf("\n%llu", 9818181818181818181ull);
    return 0;
}