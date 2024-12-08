#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);

int main(void){
    
    // 눈이 5개가 있다고 가정 , 각 문마다 점점 어려운 수식퀴즈가 출제됩니다.
    //문제 맞히면 통과, 틀리면 실패

    srand(time(NULL));
    int count = 0;
    for(int i = 1; i<5;i++){
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        showQuestion(i, num1, num2);
        int answer = -1;
        scanf("5d", &answer);
        if(answer == -1){
            printf("프로그램을 종료합니다.");
            break;
        }
    }
    return 0;
}

int getRandomNumber(int Level){
    return rand() % (level * 7) +1;
}

void showQuestion(int level, int num1, int num2){
  printf("\n\n\n### %d번째 비밀번호 ####\n", level);
  printf("\n\t%d*%d?\n",num1,mum2);
  printf("#######\n");
  printf("\n비밀번호를 입력하세요 (종료:-1) >>");

}