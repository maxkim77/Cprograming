#include <stdio.h>
void fn(){
    static int a = 3;
    a = a + 1;
    printf("%d\n", a);
}
int main() {
    fn();
    fn();
    return 0;
} 