#include <stdio.h>
//선언
void p(int num);
int main(void){

    int num = 2;
    p(num);

    num = num+3;
    p(num);

    num -=1;
    p(num);

    num *=3;
    p(num);

    num/=6;
    p(num);

    return 0;

}

void p(int num)
{
    printf("num은 %d 입니다\n",num);
}

// 반환형 함수이름 전달값 선언부와 동일해야함
/*
void 함수이름(int num){
}*/