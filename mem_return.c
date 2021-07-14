#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(char**,unsigned int,unsigned int);

const unsigned int sz_fld = 50 + 1;
const unsigned int sz_ffld = 10;

int main(void) {
    char fld[sz_ffld][sz_fld];
    for (unsigned char i=0;i<sz_ffld;++i) {
        strcpy(fld[i],"");
    }

    strcpy(fld[0],"one");
    strcpy(fld[1],"two");
    strcpy(fld[2],"three");

    char** pfld = malloc(sz_ffld*sizeof(char*));
    for (unsigned int i=0;i<sz_ffld;++i) {
        *(pfld+i) = &fld[i][0];
    }

    test(pfld,sz_ffld,sz_fld);

    printf("%s\n",fld[0]);
    printf("%s\n",fld[1]);
    printf("%s\n",fld[2]);

    free(pfld);

    return(0);
}

void test(char** fld,unsigned int m,unsigned int n) {
    strcpy(*(fld+0),"eleven");
    strcpy(*(fld+1),"twelve");
    return;
}