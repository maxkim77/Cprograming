#include <stdio.h>
int a= 5;
void fn() {
    a= a +3;
}
int main() {
    a= a+5;
    fn();
    printf("%d", a);
    return 0;
}