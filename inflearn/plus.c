#include <stdio.h>
int main(void){
    int b = 20;
    b= b+1;
    printf("b는 %d\n", ++b);
    printf("b는 %d\n", b++);
    printf("b는 %d\n", b);

    int i = 1;
    printf("hello %d\n",i++);
    printf("hello %d\n",i++);
    printf("hello %d\n",i++);
    printf("hello %d\n",i++);
    printf("hello %d\n",i++);
    printf("hello %d\n",i++);
    printf("hello %d\n",i++);

    return 0;
}