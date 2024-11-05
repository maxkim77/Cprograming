#include <stdio.h>
int main(void){
    // int age = 25;
    // if(age>=20){
    //     printf("일반인 입니다.\n");
    // }else{
    //     printf("학생입니다.\n");
    // }
    // if(age>=8 && age<=13){
    //     printf("초등학생입니다.\n");
    // }else if(age>=14 && age<=16){
    //     printf("중학생입니다.\n");
    // }else if(age > 17 && age<=19){
    //     printf("고등학생입니다.\n");
    // }else{
    //     printf("학생이 아닌가봐요.\n");
    // }

    // for(int i = 1;i<=30;i++){
    //     if(i>=6){
    //         printf("나머지학생은 집에 가세요\n");
    //         break;
    //     }
    //     printf("%d번 학생은 조별 발표준비를 하세요\n",i);
    // }
    for(int i=1;i<=30;i++){
        if(i>=6 && i<=10){
            if(i ==7){
                printf("%d 번 학생은 결석입니다. \n",i);
                continue;
            }
            printf("%d번 학생은 조별 과제를 진행하세요. \n",i);
        }
    }

    return 0;
}