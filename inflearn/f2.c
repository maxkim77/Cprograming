#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void){
    srand(time(NULL)); // Initialize random number generator
    int count = 0;
    
    // Loop for 4 levels of questions
    for(int i = 1; i <= 4; i++){
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        
        // Show the question
        showQuestion(i, num1, num2);
        
        int answer = -1;
        scanf("%d", &answer); // Correct scanf format specifier
        
        if(answer == -1){
            printf("프로그램을 종료합니다.\n");
            return 0; // Exit program gracefully
        } else if(answer == num1 * num2){
            success();
            count++;
        } else {
            fail();
        }
    }

    // After 4 questions, show the total score
    printf("총 %d문제를 맞췄습니다!\n", count);
    return 0;
}

int getRandomNumber(int level){
    return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2){
    printf("\n\n\n### %d번째 비밀번호 ####\n", level);
    printf("\n\t%d * %d = ?\n", num1, num2);
    printf("#######\n");
    printf("\n비밀번호를 입력하세요 (종료:-1) >> ");
}

void success(){
    printf("정답입니다! \n");
}

void fail(){
    printf("틀렸습니다. 다시 시도하세요.\n");
}
