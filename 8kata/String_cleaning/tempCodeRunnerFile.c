#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *clean_string (char *string)
{
// mutate the string in-place and return it
    char *buf = (char*)calloc(strlen(string)+1, 1);
    int i = 0;
    int j = 0;
    while(string[i]!= '\0'){
        if (string[i] >='0' && string[i] <= '9'){printf("here!\n");}
        else (buf[j++] = string[i]);
        i++;
    }
    strcpy(string,buf);
    free(buf);
    return string;
}
int main (){
    char *r = (char*)calloc (50,1);
    strcpy(r, "arewrs 43r2 rr");
    printf("%s\n", r);
    printf("%s",clean_string(r));
    return 0;
}