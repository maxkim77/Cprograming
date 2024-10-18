#include <stdio.h>
int main(void){
    int i = 1;
  while(i<=10){
    printf("hello world\n");
    i++;
  }

  int j = 1;
  do{
    printf("hello %d\n",j++);
  }while(j<=10);
  return 0;
}