#include <stdio.h>
int main(void){
    srand(time(NULL));
    int num = rand() % 100 + 1;
    printf("숫자 : %d\n", num);
    int answer = 0;
    int chance = 5;
    while(chance >0){
        printf("남은 기회 %d 번\n", chance--);
        printf("숫자를 맞혀 보세요 (1~100) : ");
        scanf_s("%d", &answer);

        if(answer < num){
            printf("DOWN \n\n");
        }else if(answer > num){
            printf("UP\n\n");
        }else if(answer == num){
            printf("정답입니다!\n\n");
            break;
        }else{
            printf("알수없는 오류 발생\n\n");
        }

        if(chance==0){
            printf("모든 기회를 다 소진했네요");
            break;
        }
    }


}