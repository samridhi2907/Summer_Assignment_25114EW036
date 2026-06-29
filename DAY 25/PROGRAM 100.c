#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparator function for qsort
int comp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);  
}

int main() {
    char s[] = "adfecb";

    // Sort the string using qsort
    qsort(s, strlen(s), sizeof(char), comp);

    printf("%s", s);
    return 0;
}
