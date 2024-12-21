#include <stdio.h>

void p(int num);

void function_without_return();
int function_with_return();
void function_without_params();

int main(void){
    function_without_params();
    return 0;
}

void p(int num)
{
    printf("num은 %d입니다.\n");
}

void function_without_return(){
    printf("반환값이 없는 함수입니다.");
}
int function_with_return(){
    printf("반환값이 없는 함수");
    return 10;
}

void function_without_params(){
    printf("전달값이 없는 함수");
}