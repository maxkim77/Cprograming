#include <stdio.h>
int main(void){
    char name[256];
    printf("이름이 뭐에요?");
    scanf("%s", name);

    int age;
    printf("몇살이에요?");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇 kg입니까");
    scanf("%f",&weight);

    double height;
    printf("키는 몇 kg이에요");
    scanf("%lf", &height);

    char what[256];
    printf("무슨 범죄를 저질렀어요?");
    scanf("%s", what);

    printf("이름 : %s\n", name);
    printf("나이 : %d\n", age);
    printf("몸무게 : %.2f\n", weight);
    printf("키 : %.2lf\n",height);
    printf("범죄 : %s\n", what);

    return 0;
}