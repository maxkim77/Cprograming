#include <stdio.h>

void p(int num);

int apple(int total, int ate);


int main(void){
    int ret = apple(5,2);
    printf("사과 5개중에 2개를 먹으명 %d개가 남아요", ret);
    return 0;
}