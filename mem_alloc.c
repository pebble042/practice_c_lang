#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strtag(char *s, char *tag) {
    char tmp[500];
    sprintf(tmp, "<%s>%s</%s>", tag, s, tag);
    printf("tmp = %s (%p)\n", tmp, tmp);
    // stack
    return tmp;
}

char *strtag2(char *dest, char *s, char *tag) {
//    char tmp[500];
    sprintf(dest, "<%s>%s</%s>", tag, s, tag);
    printf("dest = %s (%p)\n", dest, dest);
    // stack
    return dest;
}

char *strtag3(char *s, char *tag) {
    char tmp[500];
    sprintf(tmp, "<%s>%s</%s>", tag, s, tag);
    printf("tmp (stack) = %s (%p)\n", tmp, tmp);
    char *dest = (char *) malloc(strlen(tmp) + 1);
    strcpy(dest, tmp);
    printf("dest (heap) = %s (%p)\n", dest, dest);
    return dest;
}

int main() {
    // strtag("title", "h1");
    // <h1>title</h1>
//    char *str = strtag("title", "h1");
//    printf("str = %s (%p)\n", str, str);

//    char dest[500] = "";
//    char *str2 = strtag2(dest, "title", "h1");
//    printf("str2 = %s (%p)\n", str2, str2);

//    strtag2(dest, "hello, world!", "h1");
//    printf("dest = %s (%p)\n", dest, dest);

    char *str3 = strtag3("C programming", "h2");
    printf("str3 = %s (%p)\n", str3, str3);
    free(str3);
    printf("------ after freeing str3 -----\n");
    printf("str3 = %s (%p)\n", str3, str3);

    return 0;
}