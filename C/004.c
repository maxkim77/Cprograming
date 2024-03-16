#include <stdio.h>
int main() {
    int a = 3, b = 4;
    {
        int a = 5;
        printf("%d %d", a, b);
    }

    printf("%d %d", a, b);
    return 0;
}