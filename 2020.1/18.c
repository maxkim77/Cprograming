#include <stdio.h>

int main() {
    int c = 1;
    switch (3) {
        case 1: c += 3; break;
        case 2: c++; break;
        case 3: c = 0; break;
        case 4: c += 3; break;
        case 5: c -= 10; break;
        default: c--;
    }
    printf("%d", c);
    return 0;
}
