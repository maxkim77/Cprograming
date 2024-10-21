#include <stdio.h>
int main(void){

    for(int i =1; i<=10;i++){
        printf("hello world %d\n",i);
    }
    for(int i=1;i<=3;i++){
        printf("첫번째 반복문:%d\n",i);
        for(int j=1; j<=5;j++){
            printf("두번째 반복문:%d\n",j);
        }
    }
    for(int i=2;i<=9;i++){
        printf("%d단 계산\n",i);
        for(int j=1;j<=9;j++){
            printf("%dX%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}