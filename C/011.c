#include <stdio.h>
int main() {
    char a[10];
    fgets(a, sizeof(a), stdin);
    printf("%s", a);
    return 0;   
}