#include <stdio.h>
int main(void){
    int b = 20;
    b= b+1;
    printf("b는 %d\n", ++b);
    printf("b는 %d\n", b++);
    printf("b는 %d\n", b);
    return 0;
}