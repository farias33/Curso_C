#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpstr(const void *a, const void *b) {
    //printf("a = %p\tb=%p\n", a, b);
    
    // const char *x = a, *y = b;
    
    //printf("*x = %c\t*y=%c\n", *x, *y);
    
    //return strcmp(x, y);
    
    //return strcmp(b, a);
    return strcmp(a, b) * -1;
    
    // strcmp("Douglas", "Joana") < 0
    // strcmp("Joana", "Douglas") > 0
    
    //return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    char nomes[n][101];
    
    for(int i = 0; i < n; ++i)  {
        printf("%d: %p\n", i, nomes[i]);
        scanf(" %[^\n]", nomes[i]);
    }
    
    printf("sizeof(nomes[0]) = %lu\n", sizeof(nomes[0]));
    
    qsort(nomes, n, sizeof(nomes[0]), cmpstr);
    
    for(int i = 0; i < n; ++i) 
        printf("%s\n", nomes[i]);
        
    return 0;
}